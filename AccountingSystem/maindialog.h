#ifndef MAINDIALOG_H
#define MAINDIALOG_H

#include <QWidget>
#include <QPainter>
#include <QSqlDatabase>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlTableModel>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QItemSelectionModel>
#include <QCloseEvent>
#include <QDebug>

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
    void closeEvent(QCloseEvent *);

private slots:
    void on_ButtonAdd_clicked(void);
    void on_ButtonSure_clicked(void);
    void on_ButtonDel_clicked(void);
    void on_ButtonCancel_clicked(void);
    void on_ButtonSearch_clicked(void);

private:
    Ui::MainDialog *ui;
    QSqlTableModel *model;
};
#endif // MAINDIALOG_H
