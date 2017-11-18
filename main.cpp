#include <iostream>
#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(512,512), "Autumn Leaves", sf::Style::Close | sf::Style::Titlebar);
    sf::RenderTexture renderTexture;

    if (!renderTexture.create(500,500)){
        std::cout << "RenderTexture Error" << std::endl;
        window.close();
    }

    while(window.isOpen()){
    sf::Event event;
        while(window.pollEvent(event)){
            switch(event.type){
                case sf::Event::Closed:
                    window.close();
                    break;
                case sf::Event::LostFocus:
                    std::cout << "Focus lost" << std::endl;
                case sf::Event::GainedFocus:
                    std::cout << "Focus regained" << std::endl;
                    break;

            }
        }

        //----Game Loop----------///
        //Clearing the previous screen.
        window.clear(sf::Color::White);

        //Drawing happens here
        //window.draw();

        //Displaying a new one
        window.display();
        //----End of Game Loop---///
    }

    return 0;
}
