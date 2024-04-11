//
// Created by Joseph Garcia on 4/10/24.
//

#include "Text.h"

Text::Text() : Text(LIN_LIBERTINE)
{

}
Text::Text(fontEnum font)
:sf::Text()
{
    setFont(FontManager::getFont(font));
}
void Text::eventHandler(sf::RenderWindow& window, sf::Event & event)
{
    if(MouseEvents::isHovered(this->getGlobalBounds(),window))
        enableState(HOVERED);
    else
       disableState(HOVERED);
}
void Text::update()
{
    if(checkState(HOVERED))
    {
        setFillColor(sf::Color::Cyan);
    }
    else
        setFillColor(sf::Color::White);


}