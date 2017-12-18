
#include "charactercontroller.h"
sf::RenderWindow window(sf::VideoMode(512,512), "Autumn Leaves", sf::Style::Close | sf::Style::Titlebar);

characterController player;
int main(int argc, char** argv)
{

    float xPosChange = 0.0f;
    float yPosChange = 0.0f;
    float xNegChange = 0.0f;
    float yNegChange = 0.0f;
    float spd = 0.2f;
    while(window.isOpen()){
    sf::Event event;
        while(window.pollEvent(event)){
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::EventType::KeyPressed:
                    switch (event.key.code){
                        case sf::Keyboard::W:
                            yNegChange = spd;
                            break;
                        case sf::Keyboard::A:
                            xNegChange = spd;
                            break;
                        case sf::Keyboard::S:
                            yPosChange = spd;
                            break;
                        case sf::Keyboard::D:
                            xPosChange = spd;
                            break;
                        case sf::Keyboard::Escape:
                            window.close();
                            break;
                    }
                    break;
                case sf::Event::EventType::KeyReleased:
                    switch (event.key.code) {
                        case sf::Keyboard::W:
                            yNegChange = 0;
                            break;
                        case sf::Keyboard::A:
                            xNegChange = 0;
                            break;
                        case sf::Keyboard::S:
                            yPosChange = 0;
                            break;
                        case sf::Keyboard::D:
                            xPosChange = 0;
                            break;
                    }
            }
        }
        player.x += xPosChange - xNegChange;
        player.y += yPosChange - yNegChange;
        //----Game Loop----------///
        //Clearing the previous screen.
        player.setCords();
        window.clear(sf::Color::Black);

        //Drawing happens here
        window.draw(player.sprite);

        //Displaying a new one
        window.display();
        //----End of Game Loop---///
    }

    return 0;
}
