#include "exp.h"
#include "ui_exp.h"
#include <QPainter>
#include "level.h"
Exp::Exp(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Exp)
{
    ui->setupUi(this);
}

Exp::~Exp()
{
    delete ui;
}

void Exp::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawPixmap(0,0,900,1200,QPixmap(":/new/prefix1/pic8.png"));
}

void Exp::on_pushButton_clicked()
{
    this->close();
    Level *l=new Level();
    l->show();

}
