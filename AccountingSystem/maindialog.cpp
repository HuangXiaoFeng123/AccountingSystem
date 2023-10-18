#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent): QWidget(parent), ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    setWindowTitle("Accounting System V0.06");
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

