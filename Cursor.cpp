//
// Created by Joseph Garcia on 4/28/24.
//

#include "Cursor.h"
Cursor::Cursor()
{
    this->setSize({5,10});
    toggle = true;
}
void Cursor:: eventHandler(sf::RenderWindow& window, sf::Event & event)
{

}
void Cursor:: update(sf::Clock & clock)
{
    clock.restart();
    if(clock.getElapsedTime().asSeconds() > 1 )
        toggle = !toggle;
    if(toggle)
        setFillColor(sf::Color::Transparent);
    else
        setFillColor(sf::Color::White);
}