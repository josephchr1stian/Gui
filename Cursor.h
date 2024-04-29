//
// Created by Joseph Garcia on 4/28/24.
//

#ifndef GUI_LIBRARY_CURSOR_H
#define GUI_LIBRARY_CURSOR_H
#include <SFML/Graphics.hpp>
#include "States.h"
class Cursor: public sf::RectangleShape
{
public:
    bool toggle;
    Cursor();
    void eventHandler(sf::RenderWindow& window, sf::Event & event);
    void update(sf::Clock & clock);
};


#endif //GUI_LIBRARY_CURSOR_H
