#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mymodel.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    MyModel myModel(0);

    QVector3D vec;
    QVector2D vecc;

    ui->tableView1->setModel(&myModel);
    ui->tableView1->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
