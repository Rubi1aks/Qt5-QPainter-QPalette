#include "taks1.h"

Taks1::Taks1(QWidget *parent) : QWidget(parent)
{
    setFixedSize();
    twidth();
    theight();
    QPalette palette;
    palette.setColor(QPalette::Active, QPalette::Window, Qt::yellow);
    palette.setColor(QPalette::Inactive, QPalette::Window, Qt::green);
    this->setPalette(palette);
}

void Taks1::setFixedSize( int width, int height)
{
    this->setFixedWidth(width);
    this->setFixedHeight(height);

}

void Taks1::twidth()
{
    qDebug() << "Width = " << this->width();
}
void Taks1::theight()
{
    qDebug() << "Height = " << this->height();
}
