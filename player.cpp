#include "player.h"

Player::Player(): QGraphicsPixmapItem(),QObject()       //constructor that defines the pixmap of the player
{
    setPixmap(QPixmap(":/Images/Images/player.png").scaled(50,50));

}


