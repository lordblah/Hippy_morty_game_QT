#include "health.h"
#include <Qfont>

Health::Health(QGraphicsItem *parent): QGraphicsTextItem(parent){
    //intilialize the score to 0
    health = 5;

    //Draw the test
    setPlainText(QString("Health: " + QString::number(health)));
    setDefaultTextColor(Qt::red);
    setFont(QFont("times", 16));
}

void Health::decrease()
{
    health--;
    setPlainText(QString("Health: " + QString::number(health)));
}

int Health::getHealth(){
    return health;
}

