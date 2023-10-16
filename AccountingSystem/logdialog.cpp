#include "logdialog.h"
#include "ui_logdialog.h"

LogDialog::LogDialog(QWidget *parent) :QDialog(parent),ui(new Ui::LogDialog)
{
    ui->setupUi(this);
    setWindowTitle("登陆");
    //绘画头像
    ui->Piclabel->setScaledContents(true);
    ui->Piclabel->setPixmap(QPixmap(":/image/log_user.jpg"));
    ui->PassWordlineEdit->setEchoMode(QLineEdit::Password);
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
    if((ui->IDcomboBox->currentText()==QString("123456"))&&(ui->PassWordlineEdit->text()==QString("666666")))
    {
        accept();
    }
    else
    {
        if(ui->IDcomboBox->currentText()!=QString("123456"))
        {
            QMessageBox::warning(this,"error","账号不存在");
        }
        else if(ui->PassWordlineEdit->text()!=QString("666666"))
        {
            QMessageBox::warning(this,"error","密码错误");
        }
    }
}
