#include "gamemanager.h"

gamemanager::gamemanager()
{
    window.create(sf::VideoMode(256,256), "Autumn Leaves", sf::Style::Close | sf::Style::Titlebar);
    //   };
}
void gamemanager::loop()
{
    //----Game Loop----------///
    //Player Controls
    player.changeCords();
    player.setCords();

    //Clearing the previous screen.
    window.clear(sf::Color::Black);

    //Drawing happens here
    window.draw(gold.sprite);
    window.draw(player.sprite);

    //Displaying a new one
    window.display();
    //----End of Game Loop---///
}
