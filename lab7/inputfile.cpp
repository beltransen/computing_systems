#include "inputfile.h"

void InputFile::process(const string & data){
    if(_processor==NULL){
        cout << "["<< _name << "] Cannot process: no processor connected" << endl;
    }else{
        string file_name = _name;
        char buffer[512];
        ifstream input(file_name);
        if(input){
            string file_string;
            while(!input.eof()){
                input.getline(buffer, 512);
                file_string+=string(buffer);
            }
            _processor->process(file_string);
            input.close();
        }
    }
}
