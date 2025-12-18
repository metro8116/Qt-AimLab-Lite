#ifndef BODY_H
#define BODY_H

#include <QWidget>
#include"QPixmap"
#include"QBitmap"
#include "start.h"

namespace Ui {
class Body;
}

class Body : public QWidget
{
    Q_OBJECT

public:
    explicit Body(QWidget *parent = 0);
    ~Body();
    void timerEvent(QTimerEvent *);
    void paintEvent(QPaintEvent *event);


private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void myslot();
private:
    Ui::Body *ui;
    QTimer *timer;
    int timerNum;
    int a;
};

#endif // BODY_H
