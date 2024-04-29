//
// Created by Joseph Garcia on 4/10/24.
//

#ifndef GUI_LIBRARY_TEXT_H
#define GUI_LIBRARY_TEXT_H
#include "FontManager.h"
#include "SFML/Graphics.hpp"
#include "States.h"
#include "MouseEvents.h"
#include <iostream>
class Text : public sf::Text, public States
{

public:
    Text();
    Text(fontEnum font);
    void eventHandler(sf::RenderWindow& window, sf::Event & event);
    void update();

};


#endif //GUI_LIBRARY_TEXT_H
