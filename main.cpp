#include <iostream>
#include "Application.h"
int main() {

    Text text(LIN_LIBERTINE);
    text.setCharacterSize(32);
    text.setString("crystal clearr");

    for(int i = 0; i <1000; i++)
    {
        Text m = text;
        m.setPosition(sf::Vector2f(rand()%720,rand()%420));
        Application::push(m);
    }
    Application::run();
    return 0;
}
