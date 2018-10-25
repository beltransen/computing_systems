#include "keyboard.h"

Keyboard::Keyboard(const string & name) : Device(name){
    _cpu = NULL;
}

void Keyboard::process(){
    if(_cpu==NULL){
        cout << "["<< _name << "] Cannot process: no cpu connected" << endl;
    }else{
        string input;
        cout << "Enter the text to be processed:" << endl;
        cin >> input;
        _cpu->process(input);
    }
}

void Keyboard::connectTo(Processor & cpu){
    _cpu = &cpu;
}
