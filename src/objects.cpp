#include "objects.h"
#include "items.h"
#include <iostream>



objects::objects(std::string _name, std::string _type, float x, float y)
{
    //Defines
    name = _name;
    type = _type;
    realx = x;
    realy = y;

    //Load Texture
    sprite.setPosition(realx * 16.0f, realy * 16.0f);
    if(!texture.loadFromFile("textures/objects/" + type + ".png")){
        std::cout << "Failed to load object icon of type " << type << std::endl;
    }
    sprite.setTexture(texture);
    std::cout << "obj of type " << type << " made" << std::endl;
}
