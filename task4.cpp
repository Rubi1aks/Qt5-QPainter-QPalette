#include "task4.h"

Task4::Task4(QWidget *parent) : QWidget(parent)
{
     painter = new QPainter(this);
}

void Task4::paintEvent(QPaintEvent* event)
{
    int we = this->width() - this->margin*2 - this->spacer*(size-1);
    int he = we;
    int y = (this->height()-he)/2 + this->spacer*(size-1);
    for(int i = 0; i < this->size; i++)
    {
        this->painter->begin(this);
        this->painter->setPen(Qt::red);
        this->painter->drawRect(margin + spacer*(size - 1 - i),y + this->spacer*i,we,he);
        this->painter->end();
    }
}

Task4::~Task4()
{
    delete painter;
}
