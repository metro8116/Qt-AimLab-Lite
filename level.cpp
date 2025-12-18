#include "level.h"
#include "ui_level.h"
#include <QPainter>
#include "body.h"
int n1;
Level::Level(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Level)
{
    ui->setupUi(this);
}

Level::~Level()
{
    delete ui;
}

void Level::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawPixmap(0,0,1200,900,QPixmap(":/new/prefix1/pic2.png"));
}



void Level::on_pushButton_clicked()
{
    if(ui->radioButton_1->isChecked())
    {
        n1=1;
    }
    if(ui->radioButton_2->isChecked())
    {
        n1=2;
    }
    if(ui->radioButton_3->isChecked())
    {
        n1=3;
    }
    this->close();
    Body *bo=new Body();
    bo->show();
}
