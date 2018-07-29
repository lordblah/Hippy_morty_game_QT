#include "Score.h"
#include <Qfont>

Score:: Score(QGraphicsItem *parent): QGraphicsTextItem(parent){
    //intilialize the score to 0
    score = 0;

    //Draw the test
    setPlainText(QString("Score: " + QString::number(score)));
    setDefaultTextColor(Qt::blue);
    setFont(QFont("times", 16));
}

void Score::increase()
{
    score++;
    setPlainText(QString("Score: " + QString::number(score)));
}

int Score::getScore(){
    return score;
}

