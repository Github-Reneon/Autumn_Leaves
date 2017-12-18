#include <iostream>
#include <SFML/Graphics.hpp>

sf::RenderWindow window(sf::VideoMode(512,512), "Autumn Leaves", sf::Style::Close | sf::Style::Titlebar);

class characterController {
    public:
    float x,y = 0.0f;
    sf::Texture texture;
    sf::Sprite sprite;
    characterController (){
        sprite.setPosition(x,y);
        if (!texture.loadFromFile("textures/test_texture.png")){
            std::cout << "Error loading texture from a character Controller" << std::endl;
            window.close();
        }
        sprite.setTexture(texture);
    }
};
characterController player;
int main(int argc, char** argv)
{
    while(window.isOpen()){
    sf::Event event;
        while(window.pollEvent(event)){
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::EventType::KeyPressed:
                    std::cout << event.key.code << std::endl;
                    switch (event.key.code){
                        case sf::Keyboard::A:
                            std::cout << "A pressed" << std::endl;
                    }
                    break;
            }
        }

        //----Game Loop----------///
        //Clearing the previous screen.
        window.clear(sf::Color::Black);

        //Drawing happens here
        window.draw(player.sprite);

        //Displaying a new one
        window.display();
        //----End of Game Loop---///
    }

    return 0;
}
