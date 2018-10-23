#include <iostream>
#include "display.h"
#include "linekeyboard.h"
#include "charkeyboard.h"
#include "processor.h"

using namespace std;

int main()
{
    // Initialize some objects
    Display d("Samsung");
    Processor p("Intel");
    LineKeyboard lk("Kinesis");
    CharKeyboard ck("Logitech");

    // Connections (2 keyboards to same processor)
    p.connectTo(d); // Connect the Processor to the Display
    lk.connectTo(p); // Connect the LineKeyboard to the Processor
    ck.connectTo(p); // Connect the CharKeyboard to the Processor

    // Usage
    lk.process(); // Process one line of input
    ck.process(); // Process one character

    // Print devices names
    cout << "Display: " << d.getName() << endl;
    cout << "Processor: " << p.getName() << endl;
    cout << "LineKeyboard: " << lk.getName() << endl;
    cout << "CharKeyboard: " << ck.getName() << endl;
    return 0;
}
