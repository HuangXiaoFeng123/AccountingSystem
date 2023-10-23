#include "sqlchart.h"
#include "ui_sqlchart.h"

SqlChart::SqlChart(QWidget *parent) :QWidget(parent),ui(new Ui::SqlChart)
{
    ui->setupUi(this);
    setWindowTitle("Bar Chart");
    this->move(1830,500);
}

SqlChart::~SqlChart(void)
{
    delete ui;
}

void SqlChart::paintEvent(QPaintEvent *)
{
    QPainter sqlChart_P(this);
    QPixmap sqlChart_map(":/image/main_background.jpg");
    sqlChart_P.drawPixmap(0,0,this->width(),this->height(),sqlChart_map);
}

void SqlChart::closeEvent(QCloseEvent *e)
{
    this->cleanBarChart();
    emit destroyed();
    e->accept();
}

void SqlChart::drawBarChart(void)
{
    // QBarSet 类表示条形图中的一组条形
    QBarSet* set0 = new QBarSet("账户正收益");
    QBarSet* set1 = new QBarSet("账户负收益");
    set0->setParent(this);
    set1->setParent(this);
    set0->setColor(Qt::red);
    set1->setColor(Qt::green);
    QStringList categories;
    QVector<float>temp_sum;
    int index=dateChoose(ui->comboBox->currentText());
    QString sql=QString("select date,sum from account order by date desc;");
    QSqlQuery query;
    query.exec(sql);
    // 为每一个条形添加数据
    while(query.next())
    {   
        categories.push_front(query.value("date").toString());
        temp_sum.push_front(query.value("sum").toFloat());
        index--;
        if(index==-1)
        {
            break;
        }
    }
    for(int i=0;i<temp_sum.size();i++)
    {
        if(temp_sum[i]<0)
        {
            set1->insert(i,temp_sum[i]);
            set0->insert(i,0);
        }
        else
        {
            set0->insert(i,temp_sum[i]);
            set1->insert(i,0);
        }
    }
    // QBarSeries 类将一系列数据显示为按类别分组的垂直条。
    series=new QBarSeries(this);
    series->append(set0);
    series->append(set1);

    // QChart 类管理图表系列(series)、图例(legends)和轴(axes)。
    QChart* chart = ui->chartView->chart();                // 获取QChartView自带的chart
    chart->addSeries(series);                              // 将创建好的条形图series添加进chart中
    chart->setTitle("账户收益图");                           // 设置标题
    chart->setAnimationOptions(QChart::SeriesAnimations);  // 设置图表变化时的动画效果

    sql=QString("select max(sum),min(sum) from account;");
    query.exec(sql);
    float max=query.value("max(sum)").toFloat();
    float min=query.value("min(sum)").toFloat();
    axisY=new QValueAxis(this);;
    axisY->setRange(min, max);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    axisX=new QBarCategoryAxis(this);
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);                              // 将axis指定的轴附着到series

    chart->legend()->setVisible(true);                      // 设置图例是否可见
    chart->legend()->setAlignment(Qt::AlignBottom);         // 设置图例显示的位置
}

void SqlChart::cleanBarChart(void)
{
    ui->chartView->chart()->removeAllSeries();
    ui->chartView->chart()->removeAxis(axisX);
    ui->chartView->chart()->removeAxis(axisY);
}

int SqlChart::dateChoose(QString str)
{
    if(str=="近三月")
    {
        index=2;
    }
    else if(str=="近半年")
    {
        index=5;
    }
    else if(str=="近一年")
    {
        index=11;
    }
    else if(str=="近三年")
    {
        index=35;
    }
    return index;
}

void SqlChart::on_comboBox_currentIndexChanged(const QString &arg1)
{
    cleanBarChart();
    drawBarChart();
}
