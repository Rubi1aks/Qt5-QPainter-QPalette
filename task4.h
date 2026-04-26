#ifndef TASK4_H
#define TASK4_H

#include <QWidget>
#include <QPainter>

class Task4 : public QWidget
{
    Q_OBJECT
protected:
    QPainter* painter;
    virtual void paintEvent(QPaintEvent* event);
public:
    Task4(QWidget *parent = nullptr);
    int size = 4, margin = 50, spacer = 15;
    ~Task4();
};


#endif // TASK4_H
