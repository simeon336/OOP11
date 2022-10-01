#include <iostream>
#include "employee.hh"
#include "manager.hh"
#include "human.hh"
using namespace std;


void print(const employee&e){
    e.print();
}

void sayHello(const employee &e){
    e.sayHello();
}

int main(){
    employee e(1, "bruh");
    manager m(1, "ime", 69);
    print(e);
    print(m);
    e.sayHello();
    m.sayHello();
    cout << "hello" << endl;
}