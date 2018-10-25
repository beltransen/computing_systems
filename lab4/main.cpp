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


    // Test system
    cout << "Testing keyboards before being connected" << endl;
    lk.process(); // Process one line of input
    ck.process(); // Process one character

    // Connect  keyboards to processor (both keyboards to the same processor)
    lk.connectTo(p); // Connect the LineKeyboard to the Processor
    ck.connectTo(p); // Connect the CharKeyboard to the Processor

    // Test system
    cout << endl << "Testing system... (display not connected yet)" << endl;
    lk.process(); // Process one line of input
    ck.process(); // Process one character

    // Connect CPU to display
    p.connectTo(d); // Connect the Processor to the Display

    // Test system (everything is connected now)
    cout << endl << "Testing system... (all devices connected)" << endl;
    lk.process(); // Process one line of input
    ck.process(); // Process one character

    // Print devices names
    cout << endl << "List of system components:" << endl;
    cout << "Display: " << d.getName() << endl;
    cout << "Processor: " << p.getName() << endl;
    cout << "LineKeyboard: " << lk.getName() << endl;
    cout << "CharKeyboard: " << ck.getName() << endl;
    return 0;
}
