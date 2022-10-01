#include "manager.hh"
#include <iostream>
using namespace std;
manager::manager(){
    setId(0);
    setName("");
    this->level = 0;
}

int manager::getLevel() const{
    return this->level;
}

void manager::print()const{
    cout << "Id: " << getId() << "Name: " << getName() << "Level: " << getLevel() << endl;
}

void manager::sayHello(){
    cout << "Hello i am manager." << endl;
}