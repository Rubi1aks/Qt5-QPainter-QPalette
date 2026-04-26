#ifndef TASK2_H
#define TASK2_H

#include <QWidget>
#include <QPainter>

class task2 : public QWidget
{
    Q_OBJECT
protected:
    QPainter* painter;
    virtual void paintEvent(QPaintEvent* event);
public:
    task2(QWidget *parent = nullptr);
    int size = 4, margin = 50, spacer = 15;
    ~task2();
};

#endif // TASK2_H
