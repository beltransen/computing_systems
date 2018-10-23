#include "charkeyboard.h"

void CharKeyboard::process(){
    string input;
    cout << "Enter the character to be processed:" << endl;
    input = cin.get();
    _cpu->process(input);
}
