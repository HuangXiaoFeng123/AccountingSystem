#include "changepasswork.h"
#include "ui_changepasswork.h"

ChangePassWork::ChangePassWork(QWidget *parent) :QWidget(parent),ui(new Ui::ChangePassWork)
{
    ui->setupUi(this);
    setWindowTitle("ChangePassWork");
    setMinimumSize(550,330);
    setMaximumSize(550,330);
    QString firstPassWork="666666";
    file.setFileName("./PassWorkStringList.txt");
    bool OpenRead_OK=file.open(QIODevice::ReadOnly);
    if(OpenRead_OK==true)
    {
        oldPasswork=file.readAll();
    }
    else
    {
        //设置默认密码
        file.open(QIODevice::WriteOnly);
        file.write(firstPassWork.toUtf8());
        oldPasswork=firstPassWork;
    }
    file.close();
}

ChangePassWork::~ChangePassWork(void)
{
    delete ui;
}

void ChangePassWork::on_ButtonOK_clicked(void)
{
    QString oldLineEditStr=ui->OldlineEdit->text();
    QString newLineEditStr=ui->NewlineEdit->text();
    QString repeatStr=ui->RepeatlineEdit->text();
    if(oldLineEditStr.isEmpty()||newLineEditStr.isEmpty()||repeatStr.isEmpty())
    {
        QMessageBox::warning(this,"error","请填写完整");
    }
    else if(oldLineEditStr==oldPasswork)
    {
        if((newLineEditStr==repeatStr)&&(oldPasswork!=newLineEditStr))
        {
            oldPasswork=repeatStr;   //刷新密码
            file.setFileName("./PassWorkStringList.txt");
            file.open(QIODevice::WriteOnly);
            file.write(oldPasswork.toUtf8());
            file.close();
            QMessageBox::warning(this,"success","修改成功");
            this->close();
        }
        else if(newLineEditStr!=repeatStr)
        {
            QMessageBox::warning(this,"error","再次确认密码与新密码不同");
        }
        else if(oldPasswork==newLineEditStr)
        {
            QMessageBox::warning(this,"error","不能与原来密码相同");
        }
    }
    else
    {
        QMessageBox::warning(this,"error","旧密码错误");
    }
}

void ChangePassWork::on_ButtonNo_clicked(void)
{
    this->close();
}

void ChangePassWork::paintEvent(QPaintEvent *)
{
    QPainter changePassWorkWin_P(this);
    QPixmap changePassWorkWin_map(":/image/log_background.jpg");
    changePassWorkWin_P.drawPixmap(0,0,this->width(),this->height(),changePassWorkWin_map);
}
