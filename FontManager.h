//
// Created by Joseph Garcia on 4/10/24.
//

#ifndef GUI_LIBRARY_FONTMANAGER_H
#define GUI_LIBRARY_FONTMANAGER_H
#include <map>
#include <SFML/Graphics/Font.hpp>
#include "FontEnums.h"

class FontManager
{
private:
    static std::map<fontEnum, sf::Font> fonts;
    static void loadFont(fontEnum font);
    static std::string getFontPath(fontEnum font);
public:
    static sf::Font& getFont(fontEnum font); // Pass in an enum to get the desired sf::Font



};


#endif //GUI_LIBRARY_FONTMANAGER_H
