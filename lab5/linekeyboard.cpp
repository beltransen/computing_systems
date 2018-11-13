#include "linekeyboard.h"

void LineKeyboard::process(){
    if(_processor==NULL){
        cout << "["<< _name << "] Cannot process: no cpu connected" << endl;
    }else{
        string input;
        cout << "Enter the text to be processed:" << endl;
        getline(cin, input);
        _processor->process(input);
    }
}
