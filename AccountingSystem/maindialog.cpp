#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent): QWidget(parent), ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    setWindowTitle("Accounting System V0.09");
    QSqlDatabase db=QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("../account.db");
    if(!db.open())
    {
        QMessageBox::warning(this,"warning",db.lastError().text());
    }
    QSqlQuery query;
    query.exec("create table account(date varchar(255),accountA float,accountB float,sum float);");
    model=new QSqlTableModel(this);
    model->setTable("account");
    ui->tableView->setModel(model);
    model->select();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);  //手动提交模式
    model->setHeaderData(1,Qt::Horizontal,"中信账户");
    model->setHeaderData(2,Qt::Horizontal,"支付宝账户");
    ReadOnlyDelegate* readOnlyDelegate = new ReadOnlyDelegate(this);
    ui->tableView->setItemDelegateForColumn(3, readOnlyDelegate); //设置某列只读
}

MainDialog::~MainDialog(void)
{
    delete ui;
}

void MainDialog::paintEvent(QPaintEvent *)
{
    QPainter mainDialog_P(this);
    QPixmap mainDialog_map(":/image/main_background.jpg");
    mainDialog_P.drawPixmap(0,0,this->width(),this->height(),mainDialog_map);
}

void MainDialog::closeEvent(QCloseEvent *e)
{
    QMessageBox msgBox;
    int ret=msgBox.question(this,"close",tr("确定退出?"),QMessageBox::Ok|QMessageBox::Cancel);
    if(ret==QMessageBox::Ok)
    {
        e->accept();
    }
    else
    {
        e->ignore();
    }
}

void MainDialog::on_ButtonAdd_clicked(void)
{
    QSqlRecord record=model->record();
    int row=model->rowCount();
    model->insertRecord(row,record);
    ui->ButtonAdd->setEnabled(false);
}

void MainDialog::on_ButtonSure_clicked(void)
{
    model->submitAll();
    QString sql=QString("select date,accountA,accountB from account;");
    QSqlQuery query;
    query.exec(sql);
    QString date;
    float accountA,accountB,sum;
    while(query.next())
    {
        date=query.value("date").toString();
        accountA=query.value("accountA").toFloat();
        accountB=query.value("accountB").toFloat();
    }
    sum=accountA+accountB;
    sql=QString("update account set sum=%1 where date='%2';").arg(sum).arg(date);
    query.exec(sql);
    model->select();
    ui->ButtonAdd->setEnabled(true);
}

void MainDialog::on_ButtonDel_clicked(void)
{
    QItemSelectionModel *sModel=ui->tableView->selectionModel();
    QModelIndexList list=sModel->selectedRows();
    for(int i=0;i<list.size();i++)
    {
        model->removeRow(list.at(i).row());
    }
    model->submitAll();
}

void MainDialog::on_ButtonCancel_clicked(void)
{
    model->revertAll();
    model->submitAll();
    ui->ButtonAdd->setEnabled(true);
}

void MainDialog::on_ButtonSearch_clicked(void)
{
    QString date=ui->lineEdit->text();
    if(date.isEmpty())
    {
        model->setTable("account");
        ui->tableView->setModel(model);
    }
    else
    {
        QString str=QString("date='%1';").arg(date);
        model->setFilter(str);
    }
    model->select();
}
