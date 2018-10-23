#include "personlist.h"

PersonList::PersonList()
{
    _v = NULL;
    _n = 0;
}

PersonList::PersonList(Person * v, int n){
    _v = new Person[n];
    for(int i=0; i<_n; i++){
        _v[i]=v[i]; // Copy elements one by one
    }
    _n = n;
}

PersonList::PersonList(const PersonList & pl){
    _n = pl._n;
    _v = new Person[_n]; // Allocate required space
    for(int i=0; i<_n; i++){
        _v[i]=pl._v[i]; // Copy elements one by one
    }
}

PersonList::~PersonList(){
    delete [] _v;
}

void PersonList::readData(){
    int n;
    cout << "Please, introduce the number of people to store: ";
    cin >> n;
    _v=new Person[n];
    _n=n;
    for(int i=0; i<_n; i++){
        string name;
        int age;
        cout << "Type the name of person #"<< i<<": ";
        cin >> name;
        cout << "Enter the age of person #"<< i<<": ";
        cin >> age;
        _v[i].setName(name);
        _v[i].setAge(age);
    }
}

void PersonList::display(){
    for(int i=0; i<_n; i++){
        _v[i].display();
    }
}

Person PersonList::operator[](int i){
    return _v[i];
}
