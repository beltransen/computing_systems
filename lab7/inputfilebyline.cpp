#include "inputfilebyline.h"

void InputFileByLine::process(){
    if(_processor==NULL){
        cout << "["<< _name << "] Cannot process: no processor connected" << endl;
    }else{
        string file_name = _name;
        ifstream input(file_name);
        if(input){
            while(!input.eof()){
                string line;
                getline(input, line);
                if(line.length()>0){ // Avoid printing empty line at the end
                    _processor->process(line);
                }
            }
            input.close();
        }
    }
}

