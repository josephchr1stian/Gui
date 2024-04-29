#include <iostream>
#include "Application.h"
int main() {

    Text text(LIN_LIBERTINE);
    text.setCharacterSize(32);
    text.setString("crystal clearr");


    Application::run();
    return 0;
}
