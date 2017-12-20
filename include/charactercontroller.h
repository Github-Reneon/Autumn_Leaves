#include "gamemanager.h"
#ifndef CHARACTERCONTROLLER_H
#define CHARACTERCONTROLLER_H

class characterController {
    public:
    float realx,realy = 0.0f;
    bool control = true;
    sf::Texture texture;
    sf::Sprite sprite;
    characterController();
    void changeCords();
    void setCords();
};

#endif // CHARACTERCONTROLLER_H
