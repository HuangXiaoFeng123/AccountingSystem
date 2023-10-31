#ifndef CHANGEPASSWORK_H
#define CHANGEPASSWORK_H

#include <QWidget>
#include <QFile>
#include <QMessageBox>
#include <QPainter>

namespace Ui
{
class ChangePassWork;
}

class ChangePassWork : public QWidget
{
    Q_OBJECT

public:
    explicit ChangePassWork(QWidget *parent = nullptr);
    ~ChangePassWork(void);
    QString oldPasswork;              //public 该变量目的是为了在logdialog类中可以使用

protected:
    void paintEvent(QPaintEvent *);

private slots:
    void on_ButtonOK_clicked(void);
    void on_ButtonNo_clicked(void);

private:
    Ui::ChangePassWork *ui;
    QFile file;
};

#endif // CHANGEPASSWORK_H
