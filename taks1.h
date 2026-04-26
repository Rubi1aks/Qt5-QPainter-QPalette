#ifndef TAKS1_H
#define TAKS1_H

#include <QWidget>
#include <QDebug>
#include <QPalette>

class Taks1 : public QWidget
{
    Q_OBJECT
public:
    explicit Taks1(QWidget *parent = nullptr);
    void setFixedSize(int width = 400, int height = 200);
    void twidth();
    void theight();
signals: 
};

#endif // TAKS1_H
