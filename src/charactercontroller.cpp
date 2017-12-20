#include "charactercontroller.h"

characterController::characterController()
{
    sprite.setPosition(realx * 16.0f,realy * 16.0f);
    if (!texture.loadFromFile("textures/test_texture.png")){
        std::cout << "Error loading texture from a character Controller" << std::endl;
    }
    sprite.setTexture(texture);
}
void characterController::setCords(){
    sprite.setPosition(realx * 16.0f,realy * 16.0f);
}
void characterController::changeCords(){
    sf::Event event;
    while(manager.window.pollEvent(event))
    {
        switch(event.type)
        {
            case sf::Event::Closed:
                manager.window.close();
                break;
            case sf::Event::EventType::KeyPressed:
                switch (event.key.code)
                {
                    if(control)
                    {
                    case sf::Keyboard::Up:
                        realy -= 1;
                        break;
                    case sf::Keyboard::Left:
                        realx -= 1;
                        break;
                    case sf::Keyboard::Down:
                        realy += 1;
                        break;
                    case sf::Keyboard::Right:
                        realx += 1;
                        break;
                    case sf::Keyboard::Numpad8:
                        realy -= 1;
                        break;
                    case sf::Keyboard::Numpad4:
                        realx -= 1;
                        break;
                    case sf::Keyboard::Numpad2:
                        realy += 1;
                        break;
                    case sf::Keyboard::Numpad6:
                        realx += 1;
                        break;
                    case sf::Keyboard::Numpad7:
                        realx -= 1;
                        realy -= 1;
                        break;
                    case sf::Keyboard::Numpad9:
                        realx += 1;
                        realy -= 1;
                        break;
                    case sf::Keyboard::Numpad3:
                        realx += 1;
                        realy += 1;
                        break;
                    case sf::Keyboard::Numpad1:
                        realx -= 1;
                        realy += 1;
                        break;
                    }
                    case sf::Keyboard::Escape:
                        manager.window.close();
                        break;
                }
                break;
        }
    }
}
