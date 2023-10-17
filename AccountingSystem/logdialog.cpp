#include "logdialog.h"
#include "ui_logdialog.h"

LogDialog::LogDialog(QWidget *parent) :QDialog(parent),ui(new Ui::LogDialog)
{
    ui->setupUi(this);
    setWindowTitle("登陆");
    //绘画头像
    ui->Piclabel->setScaledContents(true);
    ui->Piclabel->setPixmap(QPixmap(":/image/log_user.jpg"));
    //密码格式
    ui->PassWordlineEdit->setEchoMode(QLineEdit::Password);
    //id文件读取
    QFile file("../IDStringList.txt");
    bool openRead_OK=file.open(QIODevice::ReadOnly);
    if(openRead_OK==true)
    {
        idList<<QString(file.readLine());
        //智能提示
        QCompleter *completer=new QCompleter(idList);
        ui->IDlineEdit->setCompleter(completer);
        file.close();
    }
}

LogDialog::~LogDialog(void)
{
    delete ui;
}

void LogDialog::paintEvent(QPaintEvent *)
{
    //绘画窗口背景
    QPainter logDialog_P(this);
    QPixmap logDialog_map(":/image/log_background.jpg");
    logDialog_P.drawPixmap(0,0,this->width(),this->height(),logDialog_map);
}

void LogDialog::on_ButtonLog_clicked(void)
{  
    QFile file("../IDStringList.txt");
    bool openWrite_OK=file.open(QIODevice::WriteOnly);
    //登陆判断(目前只支持一个账号功能)
    if((ui->IDlineEdit->text()==QString("123456"))&&(ui->PassWordlineEdit->text()==QString("666666")))
    {
        if(openWrite_OK==true)
        {
            file.write(ui->IDlineEdit->text().toUtf8());
            file.close();
        }
        accept();
    }
    else
    {
        if(ui->IDlineEdit->text()!=QString("123456"))
        {
            QMessageBox::warning(this,"error","账号不存在");
        }
        else if(ui->PassWordlineEdit->text()!=QString("666666"))
        {
            QMessageBox::warning(this,"error","密码错误");
        }
    }
}
