#ifndef IOT_H
#define IOT_H

#include <QWidget>
#include <QSqlDatabase>
#include <QTimer>

#define TIMEOUT 1*1000
namespace Ui {
class Iot;
}

class Iot : public QWidget
{
    Q_OBJECT

public:
    explicit Iot(QSqlDatabase *dbase,QWidget *parent = nullptr);
    ~Iot();

private slots:
    void onTimeOut();

private:
    Ui::Iot *ui;
    QSqlDatabase *db;
    QTimer *timer;
};

#endif // IOT_H
