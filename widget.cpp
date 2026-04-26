#include "widget.h"
#include "QPainter"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
{
    this->setWindowTitle("123");

    QPalette palette;
    //palette.setColor(QPalette::Window, Qt::yellow);

    this->setPalette(palette);

    painter = new QPainter(this);

}

void Widget::paintEvent(QPaintEvent* event)
{
    //QPainter painter(this);
    this->painter->begin(this);
    this->painter->setPen(Qt::yellow);
    this->painter->drawRect(5,7,100,50);
    this->painter->end();
}

Widget::~Widget()
{
    delete painter;
}

