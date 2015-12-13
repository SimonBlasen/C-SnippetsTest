#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QVector3D vec;
    QVector2D vecc;

    ui->tableView1->setModel(&m_model);
    ui->tableView1->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
