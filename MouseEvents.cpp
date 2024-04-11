//
// Created by Joseph Garcia on 4/11/24.
//


#include "MouseEvents.h"
bool MouseEvents:: isHovered(const sf::FloatRect & bounds, const sf::RenderWindow& window)
{
    return bounds.contains((sf::Vector2f)sf::Mouse::getPosition(window));

}