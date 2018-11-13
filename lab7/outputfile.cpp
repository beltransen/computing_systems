#include "outputfile.h"

void OutputFile::process(const string & data){
    string file_name = _name;
    ofstream output(file_name, ios::out | ios::app);
    if(output.is_open()){
        time_t rawtime;
        struct tm *timeinfo;
        time(&rawtime);
        timeinfo = localtime(&rawtime);
        string time_string = asctime(timeinfo);
        time_string.erase(std::remove(time_string.begin(), time_string.end(), '\n'), time_string.end());
        output << time_string << ": " << data << endl;
        output.close();
    }
}

