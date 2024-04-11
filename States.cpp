//
// Created by Joseph Garcia on 4/10/24.
//

#include "States.h"


States::States()
{
    for(int i = 0; i < LAST_STATE; i ++)
    {
        states[static_cast<StateEnum>(i)] = false;
    }
    //Set all the bool values of states map at key StateEnum to false

}
bool States::checkState(StateEnum stateBeingChecked) const
{
    return states.at(stateBeingChecked);
}

void States:: disableState(StateEnum state)
{
    states[state] = false;
}

void  States::enableState(StateEnum state)
{
    states[state] = true;
}

void  States::toggleState(StateEnum state)
{
    states[state] = !states[state];
}