#include "keyboard.h"

void Keyboard::process(){
    string input;
    cout << "Enter the text to be processed:" << endl;
    cin >> input;
    _cpu->process(input);
}

void Keyboard::connectTo(Processor & cpu){
    _cpu = &cpu;
}
