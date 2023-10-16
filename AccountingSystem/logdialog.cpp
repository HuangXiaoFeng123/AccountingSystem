#include "logdialog.h"
#include "ui_logdialog.h"

LogDialog::LogDialog(QWidget *parent) :QDialog(parent),ui(new Ui::LogDialog)
{
    ui->setupUi(this);
    setWindowTitle("登陆");
}

LogDialog::~LogDialog(void)
{
    delete ui;
}

void LogDialog::paintEvent(QPaintEvent *)
{
    QPainter logDialog_P(this);
    QPixmap logDialog_map(":/image/log_background.jpg");
    logDialog_P.drawPixmap(0,0,this->width(),this->height(),logDialog_map);
}
