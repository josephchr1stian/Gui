//
// Created by Joseph Garcia on 4/23/24.
//

#include "InputBox.h"
InputBox::InputBox()
{
   //sf::Vector2f startPos = this->getPosition();
   //this->setPosition(100,100);
   this->setSize({100,100});
   //text.setPosition(100,100);
   this->setFillColor(sf::Color::White);
   text.setFillColor(sf::Color::White);
   text.setCharacterSize(12);
   std::cout<<"sd";
   //text.setPosition({startPos.x*1.10f, startPos.y*1.10f}); // Change the text object to be a little lower.;


}
void InputBox:: update()
{
    //text.setString(string);


}
void InputBox:: eventHandler(sf::RenderWindow& window, sf::Event & event)
{
    if(event.type == sf::Event::TextEntered)
    {
        std::cout<<event.text.unicode;
        handle(event);

    }

    //textObject.set
}
void InputBox:: draw(sf::RenderTarget &window, sf::RenderStates states) const
{
  //window.draw(*this);
  window.draw(text);

}

void InputBox:: handle(sf::Event & event)
{
    if(event.text.unicode < 128)
    {

        if(event.text.unicode == '\b')
        {
            std::cout<<"LOL";
            sf::String copy;
            for(auto letter = string.begin(); letter != string.end(); ++letter )
            {
                if (letter == string.end())
                    break;
                copy += *letter;
            }
            string = copy;
            text.setString(copy);
        }
        string+= event.text.unicode; // Add the pressed key to the string
        text.setString(string);
    }
    else
    {
        std::cout<<"LOL";
        if(event.key.scancode == sf::Keyboard::Enter)
        {
            string+= "\n"; // Add the pressed key to the string
        }
        if(event.key.scancode == sf::Keyboard::BackSpace)
        {
            //std::cout<<"LOL";
            sf::String copy;
            for(auto letter = string.begin(); letter != string.end(); ++letter )
            {
                if (letter == string.end())
                    break;
                copy += *letter;
            }
            string = copy;
            text.setString(copy);
        }
    }
}