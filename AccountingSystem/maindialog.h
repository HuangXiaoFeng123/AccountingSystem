#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QWidget>

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

private:
    Ui::MainDialog *ui;
};
#endif // MAINDIALOG_H
