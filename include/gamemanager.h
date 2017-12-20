#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include <SFML/Graphics.hpp>
#include "charactercontroller.h"
#include "objects.h"
#include "items.h"

class gamemanager
{
    public:
        sf::RenderWindow window;
        characterController player;
        gamemanager();
        void loop();

    protected:
    private:
};

extern gamemanager manager;

#endif // GAMEMANAGER_H
