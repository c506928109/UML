#include "MainWindow.h"
#include "qlayout.h"
#include "qlabel.h"
#include "qframe.h"
#include "Library/ClassWidget.h"

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent)
{
    ui.setupUi(this);
    CreateList();
}

void MainWindow::CreateList()
{
    //QWidget* Widget = new QWidget();
    //m_Layout = new QGridLayout();
    //this->setCentralWidget(Widget);
    //Widget->setLayout(m_Layout);
    //QWidget* Widget = new QWidget();
    //Widget->setParent(this);
    //Widget->setGeometry(QRect(100, 100, 600, 500));
    //QVBoxLayout* VerticalBox = new QVBoxLayout(Widget); // 向屏幕添加控件需要先创建widget, 再添加控件
    //Widgets.append(VerticalBox);
    //QFrame* Frame = new QFrame();
    //Frame->setStyleSheet("background-color:#ffffff");
    //VerticalBox->addWidget(Frame);
    //m_Layout->addLayout(VerticalBox, 0, 0);

    QClassWidget* ClassWidget = new QClassWidget(this);
}