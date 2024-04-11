//
// Created by Joseph Garcia on 4/10/24.
//

#include "FontManager.h"

std::map<fontEnum, sf::Font> FontManager::fonts;

void FontManager::loadFont(fontEnum font)
{
    if(!fonts[font].loadFromFile(getFontPath(font))) // If load unsuccessful
    {
        exit(28);
    }

}

std::string FontManager::getFontPath(fontEnum font)
{
    switch(font)
    {
        case LIN_LIBERTINE:
            return "Fonts/LinLibertine_aS.ttf";
        case OPENSANS_BOLD:
            return "Fonts/OpenSans-Bold.ttf";

    }

}

sf::Font &FontManager::getFont(fontEnum font)
{
    if(fonts.count(font) == 0)
        loadFont(font);
    return fonts[font]; // Return the font value to the key font
}

