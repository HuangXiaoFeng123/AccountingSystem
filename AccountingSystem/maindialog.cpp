#include "maindialog.h"
#include "ui_maindialog.h"

MainDialog::MainDialog(QWidget *parent): QWidget(parent), ui(new Ui::MainDialog)
{
    ui->setupUi(this);
    setWindowTitle("Accounting System V0.02");
}

MainDialog::~MainDialog(void)
{
    delete ui;
}

void MainDialog::paintEvent(QPaintEvent *)
{
    QPainter mainDialog_P(this);
    QPixmap mainDialog_map(":/image/log_background.jpg");
    mainDialog_P.drawPixmap(0,0,this->width(),this->height(),mainDialog_map);
}

