#include "charkeyboard.h"

void CharKeyboard::process(){
    if(_cpu==NULL){
        cout << "["<< _name << "] Cannot process: no cpu connected" << endl;
    }else{
        string input;
        cout << "Enter the character to be processed:" << endl;
        input = cin.get();
        cin.ignore(1000, '\n'); // This cleans cin buffer (extra characters and \n are removed and not considered in further readings)
        _cpu->process(input);
    }
}
