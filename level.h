#ifndef LEVEL_H
#define LEVEL_H

#include <QWidget>
#include"body.h"
extern int n1;

namespace Ui {
class Level;
}

class Level : public QWidget
{
    Q_OBJECT

public:
    explicit Level(QWidget *parent = 0);
    ~Level();
    void paintEvent(QPaintEvent *event);

private slots:
    void on_pushButton_clicked();

private:
    Ui::Level *ui;

};


#endif // LEVEL_H
