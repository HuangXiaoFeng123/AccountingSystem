#include "sqlchart.h"
#include "ui_sqlchart.h"

SqlChart::SqlChart(QWidget *parent) :QWidget(parent),ui(new Ui::SqlChart)
{
    ui->setupUi(this);
    setWindowTitle("Bar Chart");
    // QBarSet 类表示条形图中的一组条形
    QBarSet* set0 = new QBarSet("账户正收益");
    QBarSet* set1 = new QBarSet("账户负收益");
    set0->setColor(Qt::red);
    set1->setColor(Qt::green);
    QStringList categories;
    QString sql=QString("select date,sum from account;");
    QSqlQuery query;
    query.exec(sql);
    // 为每一个条形添加数据
    while(query.next())
    {
        categories<<query.value("date").toString();
        float temp_sum =query.value("sum").toFloat();
        if(temp_sum<0)
        {
            *set1<<temp_sum;
            *set0<<0;
        }
        else
        {
            *set0<<temp_sum;
            *set1<<0;
        }
    }
    // QBarSeries 类将一系列数据显示为按类别分组的垂直条。
    QBarSeries* series = new QBarSeries();
    series->append(set0);
    series->append(set1);

    // QChart 类管理图表系列(series)、图例(legends)和轴(axes)。
    QChart* chart = ui->chartView->chart();                // 获取QChartView自带的chart
    chart->addSeries(series);                              // 将创建好的条形图series添加进chart中
    chart->setTitle("账户收益图");                           // 设置标题
    chart->setAnimationOptions(QChart::SeriesAnimations);  // 设置图表变化时的动画效果

    QValueAxis* axisY = new QValueAxis();
    sql=QString("select max(sum),min(sum) from account;");
    query.exec(sql);
    float max=query.value("max(sum)").toFloat();
    float min=query.value("min(sum)").toFloat();
    axisY->setRange(min, max);
    chart->addAxis(axisY, Qt::AlignLeft);
    series->attachAxis(axisY);

    QBarCategoryAxis* axisX = new QBarCategoryAxis();
    axisX->append(categories);
    chart->addAxis(axisX, Qt::AlignBottom);
    series->attachAxis(axisX);                              // 将axis指定的轴附着到series

    chart->legend()->setVisible(true);                      // 设置图例是否可见
    chart->legend()->setAlignment(Qt::AlignBottom);         // 设置图例显示的位置
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

void SqlChart::on_ButtonBack_clicked(void)
{
    this->close();
}
