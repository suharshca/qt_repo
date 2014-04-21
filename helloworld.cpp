#include "helloworld.h"
#include "ui_helloworld.h"

helloworld::helloworld(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::helloworld)
{
    ui->setupUi(this);
    ui->lineEdit->setStyleSheet("color: blue;"
                                "background-color: orange;"
                                "selection-color: yellow;"
                                "selection-background-color: blue;");
    ui->pushButton->setStyleSheet("color:green;");

}


helloworld::~helloworld()
{
    delete ui;
}

void helloworld::on_pushButton_clicked()
{
    ui->lineEdit->setText("  Hello Guys its me Suharsh! :P ");

}
