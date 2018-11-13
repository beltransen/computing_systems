#ifndef KEYBOARD_H
#define KEYBOARD_H
#include "input.h"
#include <iostream>
#include <string>

class Keyboard : public Input
{
public:
    Keyboard(const string & name);
    void process();
};

#endif // KEYBOARD_H
