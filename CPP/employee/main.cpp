#include <iostream>
#include "employee.hh"
#include "manager.hh"
using namespace std;


void print(const employee&e){
    e.print();
}

int main(){
    employee e(1, "bruh");
    manager m(1, "karen", 69);
    print(e);
    print(m);
    cout << "hello" << endl;
}