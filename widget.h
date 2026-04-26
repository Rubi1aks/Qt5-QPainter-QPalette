#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPainter>

class Widget : public QWidget
{
    Q_OBJECT
protected:
    QPainter* painter;
    virtual void paintEvent(QPaintEvent* event);
public:
    Widget(QWidget *parent = nullptr);
    ~Widget();
};
#endif // WIDGET_H
