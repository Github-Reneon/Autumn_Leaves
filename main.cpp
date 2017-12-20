#include "gamemanager.h"

gamemanager manager;
objects gold("Gold", "coins", 4.0f, 4.0f);

int main()
{
    while(manager.window.isOpen())
    {
        manager.loop();
    }

    return 0;
}
