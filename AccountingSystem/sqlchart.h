#ifndef SQLCHART_H
#define SQLCHART_H

#include <QWidget>
#include <QtCharts>
#include <QSqlQuery>
#include <QPaintEvent>
#include <QPainter>
#include <QSqlError>
#include <QCloseEvent>
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
    void drawBarChart(void);
    void cleanBarChart(void);
    int dateChoose(QString str);

protected:
    void paintEvent(QPaintEvent *);
    void closeEvent(QCloseEvent *);

private slots:
    void on_comboBox_currentIndexChanged(const QString &arg1);

private:
    Ui::SqlChart *ui;
    QBarSeries* series;
    QValueAxis* axisY;
    QBarCategoryAxis* axisX;
    int index;
};

#endif // SQLCHART_H
