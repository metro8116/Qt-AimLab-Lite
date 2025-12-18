#ifndef EXP_H
#define EXP_H

#include <QWidget>

namespace Ui {
class Exp;
}

class Exp : public QWidget
{
    Q_OBJECT

public:
    explicit Exp(QWidget *parent = 0);
    ~Exp();
    void paintEvent(QPaintEvent *event);


private slots:
    void on_pushButton_clicked();

private:
    Ui::Exp *ui;
};

#endif // EXP_H
