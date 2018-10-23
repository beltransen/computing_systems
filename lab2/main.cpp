#include <iostream>
#include "person.h"

using namespace std;

int main()
{
    Person p1("Santiago", 17); // Parametrized constructor
    p1.display();
    Person p2(p1); // Copy constructor
    p2.display();
    Person p3; // Empty constructor
    p3.setName("Marina");
    p3.setAge(25);
    p3.display();
    Person p4, p5; // Empty constructor
    p4 = p2; // Assignment operator
    p5 = p3; // Assignment operator
    p4.display();
    p5.display();


    Person list [5] = {p1, p2, p3, p4, p5};

    // Display all names containing the character 's'
    cout << "Names containing letter \'s\':" << endl;
    for(int i =0; i<5; i++){
        string name = list[i].getName();
        for(int j=0; j<name.length(); j++){
            if(name[j]=='s' || name[j]=='S'){
                cout << list[i].getName() << endl;
                break;
            }
        }
    }

    // Display all names of the people over 18 years old
    cout << "People older than 18:" << endl;
    for(int i =0; i<5; i++){
        if(list[i].getAge()>18){
            cout << list[i].getName() << endl;
            break;
        }
    }

    return 0;
}
