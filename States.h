//
// Created by Joseph Garcia on 4/10/24.
//

#ifndef GUI_LIBRARY_STATES_H
#define GUI_LIBRARY_STATES_H
#include "StateEnum.h"
#include <map>

class States
{
private:
    std::map<StateEnum, bool> states;
public:
    States();

    bool checkState(StateEnum stateBeingChecked) const;

    void disableState(StateEnum state);

    void enableState(StateEnum state);

    void toggleState(StateEnum state);



};


#endif //GUI_LIBRARY_STATES_H
