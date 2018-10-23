#include "linekeyboard.h"

void LineKeyboard::process(){
    string input;
    cout << "Enter the text to be processed:" << endl;
    getline(cin, input);
    _cpu->process(input);
}
