#include "score.h"

Score::Score(QGraphicsItem *parent): QGraphicsTextItem(parent)
{
    //We want to call the super classes or the base classes
    //constructor passing int the parent: QGraphicsTextItem
    // initialize the score to 0
        score = 0;

    // draw the text
    setPlainText(QString("Score: ") + QString::number(score)); // Score: 0
    setDefaultTextColor(Qt::cyan);
    setFont(QFont("times",16));
}
void Score::increase(){
    score++;
    setPlainText(QString("Score: ") + QString::number(score)); // Score: 1
}

int Score::getScore(){
    return score;
}
