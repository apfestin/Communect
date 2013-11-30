#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ui_userhome.h"
#include "userhome.h"
#include "Qt";

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Communect: Community Connect!");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_loginbutton_clicked()
{
   UserHome *auserhome = new UserHome();
   auserhome->setWindowFlags(Qt::Widget);
   this->setCentralWidget(auserhome);
}
