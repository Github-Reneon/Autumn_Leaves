#ifndef OBJECTS_H
#define OBJECTS_H
#include <SFML/Graphics.hpp>
#include <iostream>

#include "items.h"
#include <vector>

class objects
{
    public:
        //Name is the name of the object when moused over, should be equal to item name.
        //Type is the picture the object will represent
        //Visibility is determined by the players eyes
        //Seen is determined by the players memory basically "I've seen it before but i'm not sure it's in the same place"
        std::string name;
        std::string type;
        items info;
        bool visible = true;
        bool seen = true;
        float realx,realy;
        sf::Texture texture;
        sf::Sprite sprite;
        objects(std::string, std::string, float, float);
};
extern objects gold;

#endif // OBJECTS_H
