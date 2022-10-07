#ifndef _CAR_HH_
#define _CAR_HH_
#include <string>
#include <iostream>
using namespace std;

class Car{
    int id;
    static int idCounter;
    string name;
    double price;
public:
    Car();
    Car(const string &name, const double &price);

    static int next_idCounter();
    int getId()const;
    double getPrice()const;
    string getName()const;
    
    bool operator>(const Car &other);
    bool operator<(const Car &other);
    bool operator==(const Car &other);
    friend ostream &operator<<(ostream &os, const Car &car);
};



#endif