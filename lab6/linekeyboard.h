#ifndef LINEKEYBOARD_H
#define LINEKEYBOARD_H
#include "keyboard.h"
#include <iostream>
#include <string>

class LineKeyboard : public Keyboard
{
public:
    LineKeyboard(const string & name) : Keyboard(name){}
    void process();
};

#endif // LINEKEYBOARD_H
