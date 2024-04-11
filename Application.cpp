//
// Created by Joseph Garcia on 4/10/24.
//

#include "Application.h"
#include "MouseEvents.h"

void Application::run()
{
    static std::vector<Text> Texts;
    sf::RenderWindow window({720, 420, 32}, "GUI LIBRARY");
    Text text(LIN_LIBERTINE);
    text.setCharacterSize(32);
    text.setString("crystal clearr");
    sf::Text words;

    words.setFont(FontManager::getFont(LIN_LIBERTINE));
    words.setString("Hello");
    words.setCharacterSize(24);
    while (window.isOpen())
    {
        sf::Event event;
        while(window.pollEvent(event))
        {
            if(event.type == sf::Event::Closed)

                window.close();
            text.eventHandler(window, event);
            for (Text& t : Texts)
                t.eventHandler(window, event);
        }
        for(Text & t: Texts)
            t.update();
        text.update();
        window.clear();
        window.draw(text);
        //window.draw(words);
        window.display();
    }
}

void Application::push(const Text &text) {
    Texts.push_back(text);
}