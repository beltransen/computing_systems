#include "processor.h"

void Processor::process(const string &data){
    string processed_data = "PROCESSED: ";
    for(int i=data.length()-1; i>=0;i--){
        processed_data.push_back(data[i]);
    }
    _display->process(processed_data);
}

void Processor::connectTo(Display & display){
    _display = &display;
}
