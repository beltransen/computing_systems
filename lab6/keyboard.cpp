#include "keyboard.h"

Keyboard::Keyboard(const string & name) : Input(name){}

void Keyboard::process(){
    if(_processor==NULL){
        cout << "["<< _name << "] Cannot process: no processor connected" << endl;
    }else{
        string input;
        cout << "Enter the text to be processed:" << endl;
        cin >> input;
        _processor->process(input);
    }
}
