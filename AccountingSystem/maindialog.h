#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QWidget>
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui
{
class MainDialog;
}
QT_END_NAMESPACE

class MainDialog : public QWidget
{
    Q_OBJECT

public:
    MainDialog(QWidget *parent = nullptr);
    ~MainDialog(void);

protected:
    void paintEvent(QPaintEvent *);

private:
    Ui::MainDialog *ui;
};
#endif // MAINDIALOG_H
