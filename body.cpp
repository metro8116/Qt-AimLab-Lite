#include "body.h"
#include "ui_body.h"
#include <QPushButton>
#include <QPainter>
#include <QTimer>
#include "level.h"
#include<QMouseEvent>
#include"QPixmap"
#include"QBitmap"
#include <QtCore>
#include <QMessageBox>
#include <QDebug>
#include <QString>
#include "start.h"
Body::Body(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Body),a(0)
{
    ui->setupUi(this);

    //改变按钮为不规则按钮
    QPixmap pix;
    if(n1==1){
    pix.load(":/new/prefix1/pic4.png");
    ui->pushButton->setFixedSize(pix.size());
    ui->pushButton->setMask(pix.mask());
    ui->pushButton->setStyleSheet("background-image: url(:/new/prefix1/pic4.png)");}
    if(n1==2){
    pix.load(":/new/prefix1/pic6.png");
    ui->pushButton->setFixedSize(pix.size());
    ui->pushButton->setMask(pix.mask());
    ui->pushButton->setStyleSheet("background-image: url(:/new/prefix1/pic6.png)");}
    if(n1==3){
    pix.load(":/new/prefix1/pic7.png");
    ui->pushButton->setFixedSize(pix.size());
    ui->pushButton->setMask(pix.mask());
    ui->pushButton->setStyleSheet("background-image: url(:/new/prefix1/pic7.png)");}
    //倒计时设置
    timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(myslot()));

}

Body::~Body()
{
    delete ui;
}
void Body::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    painter.drawPixmap(200,0,1200,1200,QPixmap(":/new/prefix1/pic3.jpg"));
    painter.drawPixmap(0,0,200,1200,QPixmap(":/new/prefix1/pic5.jpg"));
}

void Body::timerEvent(QTimerEvent *)
{
    ui->pushButton->move(300+qrand()%900,100+qrand()%700);
    killTimer(timerNum);
    timerNum=startTimer(1000000);
}

void Body::on_pushButton_clicked()
{
    killTimer(timerNum);
    timerNum=startTimer(0);
    a += 10;
    ui->label_2->setText("得分："+tr("%1").arg(a));
}

void Body::myslot()
{
    this->close();
    QMessageBox Msg(QMessageBox::Information,"Game Over","时间到！"+ui->textEdit->toPlainText()+"秒内，您的分数是："+tr("%1").arg(a));
    Msg.addButton("结束游戏",QMessageBox::AcceptRole);
    Msg.addButton("再来一次",QMessageBox::RejectRole);
    int res=Msg.exec();
    if(res==1){
        Start *s=new Start();
        s->show();
    }
    timer->stop();
}
void Body::on_pushButton_2_clicked()
{
    ui->pushButton_2->setText("已开始！");
    QString str = ui->textEdit->toPlainText();
    bool OK;
    int num = str.toInt(&OK, 10);
    num *= 1000;
    timer->start(num);
}



