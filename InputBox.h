//
// Created by Joseph Garcia on 4/23/24.
//

#ifndef GUI_LIBRARY_INPUTBOX_H
#define GUI_LIBRARY_INPUTBOX_H
#include "SFML/Graphics.hpp"
#include "Text.h"
#include "FontEnums.h"
#include "Cursor.h"
#include <iostream>

class InputBox: public sf::RectangleShape
{

public:
    Text text;
    sf::String string;
    sf::Clock clock;
    Cursor cursor;
    InputBox();
    void update();
    void eventHandler(sf::RenderWindow& window, sf::Event & event);
    void draw(sf::RenderTarget &window, sf::RenderStates states) const override;
    void handle(sf::Event &event);

};


#endif //GUI_LIBRARY_INPUTBOX_H
