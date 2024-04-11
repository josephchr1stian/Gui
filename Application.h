//
// Created by Joseph Garcia on 4/10/24.
//

#ifndef GUI_LIBRARY_APPLICATION_H
#define GUI_LIBRARY_APPLICATION_H
#include "SFML/Graphics.hpp"
#include "Text.h"
#include "MouseEvents.h"
#include <vector>
class Application
{
private:
    static std::vector<Text> textVector;
public:
    static void run();
    static void push(const Text &text);


};


#endif //GUI_LIBRARY_APPLICATION_H
