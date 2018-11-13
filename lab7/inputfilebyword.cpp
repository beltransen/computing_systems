#include "inputfilebyword.h"

void InputFileByWord::process(){
    if(_processor==NULL){
        cout << "["<< _name << "] Cannot process: no processor connected" << endl;
    }else{
        string file_name = _name;
        ifstream input(file_name);
        if(input){
            while(!input.eof()){
                string line;
                getline(input, line); // Get a line of text

                // Split line in words
                size_t pos = 0;
                std::string word;
                while ((pos = line.find(' ')) != std::string::npos) {
                    word = line.substr(0, pos); // Extract word
                    line.erase(0,pos+1); // Remove word + separator
                    _processor->process(word); // Process word
                }
                if(line.length()>0){ // Process last word before endl (if any)
                    _processor->process(line);
                }
            }
            input.close();
        }
    }
}

