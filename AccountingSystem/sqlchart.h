#ifndef SQLCHART_H
#define SQLCHART_H

#include <QWidget>
#include <QtCharts>
#include <QSqlQuery>
#include <QPaintEvent>
#include <QPainter>
#include <QDebug>

QT_CHARTS_USE_NAMESPACE
namespace Ui
{
class SqlChart;
}

class SqlChart : public QWidget
{
    Q_OBJECT

public:
    explicit SqlChart(QWidget *parent = nullptr);
    ~SqlChart(void);
    void paintEvent(QPaintEvent *);

private slots:
    void on_ButtonBack_clicked(void);

private:
    Ui::SqlChart *ui;
};

#endif // SQLCHART_H
