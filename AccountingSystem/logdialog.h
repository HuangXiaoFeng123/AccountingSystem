#ifndef LOGDIALOG_H
#define LOGDIALOG_H

#include <QWidget>
#include <QDialog>
#include <QPainter>
#include <QMessageBox>
#include <QDebug>

namespace Ui
{
class LogDialog;
}

class LogDialog : public QDialog
{
    Q_OBJECT

public:
    explicit LogDialog(QWidget *parent = nullptr);
    ~LogDialog(void);

protected:
    void paintEvent(QPaintEvent *);

private slots:
    void on_ButtonLog_clicked(void);

private:
    Ui::LogDialog *ui;
};

#endif // LOGDIALOG_H
