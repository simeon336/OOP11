#include "car.hh"
int Car::idCounter = 0;

int main(){
    Car c1("Lambo", 6966.69);
    Car c2("Nisan", 123.21);
    Car c3("Bombastichno", 44.1);

    cout << c1;
    cout << c2;
    cout << c3;
    if(c1 > c2){
        cout << "test >" << endl; 
    }
    if(c2 < c1){
        cout << "test <" << endl;
    }
    if(c3 == c3){
        cout << "test ==" << endl;
    }

    return 0;
}