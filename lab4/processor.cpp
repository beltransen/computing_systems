#include "processor.h"

Processor::Processor(const string & name) : Device(name){
    _display = NULL;
}

void Processor::process(const string &data){
    if(_display==NULL){
        cout << "["<< _name << "] Cannot process: no display connected" << endl;
    }else{
        string processed_data = "PROCESSED: ";
        for(int i=data.length()-1; i>=0;i--){
            processed_data.push_back(data[i]);
        }
        _display->process(processed_data);
    }
}

void Processor::connectTo(Display & display){
    _display = &display;
}
