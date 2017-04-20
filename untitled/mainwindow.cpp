#include "mainwindow.h"
#include "ui_mainwindow.h"
#define PI  3.14
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
#ifndef aotu
void MainWindow::on_pushButton_clicked()
{
    bool ok;
    QString TempStr;
    QString ValueStr=ui->lineEdit->text();
    int Value=ValueStr.toInt(&ok);
    double product=Value*Value*PI;
    ui->lineEdit_2->setText(TempStr.setNum(product));
    ui->lineEdit->setText(NULL);

}
#else
void MainWindow::on_lineEdit_textChanged(const QString &arg1)
{
    bool ok;
    QString num;
    QString tempstr=ui->lineEdit->text();
    int value=tempstr.toInt(&ok);
    double value2=value*value*PI;
    ui->lineEdit_2->setText(num.setNum(value2));
}
#endif
