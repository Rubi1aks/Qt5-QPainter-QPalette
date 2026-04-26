#include "task2.h"

task2::task2(QWidget *parent) : QWidget(parent)
{
    painter = new QPainter(this);
}
//3
/*
a)мы не сможем получить информацию о ширине и высоте окна
б)без параметра ф-я не является наследником QPainter, а значит придется писать собственную
в)окно просто не будет показано...
г)ничего не поменяется, так делать можно

 */
void task2::paintEvent(QPaintEvent* event)
{
    int we = (this->width() - this->margin*2 - this->spacer*(size-1))/(size);
    int he = (this->height() - this->margin*2);
    int y = (this->height()-he)/2;
    int ot = (we+this->spacer);
    for(int i = 0; i < this->size; i++)
    {
        this->painter->begin(this);
        this->painter->setPen(Qt::red);
        this->painter->drawRect(margin + ot*i,y,we,he);
        this->painter->end();
    }
}

task2::~task2()
{
    delete painter;
}
