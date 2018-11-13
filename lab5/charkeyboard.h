#ifndef CHARKEYBOARD_H
#define CHARKEYBOARD_H
#include "keyboard.h"
#include <iostream>
#include <string>

class CharKeyboard : public Keyboard
{
public:
    CharKeyboard(const string & name) : Keyboard(name){}
    void process();
};

#endif // CHARKEYBOARD_H
