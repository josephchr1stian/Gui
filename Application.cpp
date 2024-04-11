//
// Created by Joseph Garcia on 4/10/24.
//

#include "Application.h"
#include "MouseEvents.h"
 std::vector<Text> Application::textVector;
void Application::run()
{
    sf::RenderWindow window({720, 420, 32}, "GUI LIBRARY");
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
            for (Text& t : textVector)
                t.eventHandler(window, event);
        }
        for(Text & t: textVector)
            t.update();
        window.clear();//window.draw(words);
        for(Text & t: textVector)
        window.draw(t);
        window.display();
    }
}
void Application::push(const Text &text) {
    textVector.push_back(text);
}