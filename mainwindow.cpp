#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QVariant>
#include <QAbstractEventDispatcher>
#include <QUrl>
#include <QDebug>
#include <QDir>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->addrLineEdit->setText("https://www.baidu.com/");
    this->showAddrWeb();

    connect(ui->goPushButton,SIGNAL(clicked(bool)),this,SLOT(showAddrWeb()));
    connect(ui->mapBtn,SIGNAL(clicked(bool)),this,SLOT(showBaiduMap()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::webShow(const QString &url)
{
    ui->webBrowser->dynamicCall("Navigate(const QString&)", url);
}

void MainWindow::showAddrWeb()
{
    QString addr=ui->addrLineEdit->text();
    //if((addr.indexOf("www")!=0)&&(addr.indexOf("http")!=0))  return;
    webShow(addr);
}

void MainWindow::showBaiduMap()
{
    QString mapHtml=QDir::currentPath()+"/MapFile/BaiduMap.html";
    qDebug()<<QDir::currentPath();
    //qDebug()<<myurl;
    ui->addrLineEdit->setText("地图");
    webShow(mapHtml);
}
