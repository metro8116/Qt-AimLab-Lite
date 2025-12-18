#include "start.h"
#include "ui_start.h"
#include "level.h"
#include "exp.h"
Start::Start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Start)
{
    ui->setupUi(this);
}

Start::~Start()
{
    delete ui;
}

void Start::on_pushButton_clicked()
{
    this->close();
    Exp *e=new Exp();
    e->show();
}
