#include "car.hh"

Car::Car(){}
Car::Car(const string &name, const double &price){
    this->id = this->next_idCounter();
    this->name = name;
    this->price = price;
}

int Car::next_idCounter(){
    idCounter++;
    return idCounter;
}
double Car::getPrice()const{
    return this->price;
}

int Car::getId()const{
    return this->id;
}

string Car::getName()const{
    return this->name;
}

bool Car::operator<(const Car &other){
    if(this->price < other.price){
        return true;
    }
    if(this->price == other.price){
        if(this->id < other.id){
            return true;
        }
    }
    return false;
}

bool Car::operator>(const Car &other){
     if(this->price > other.price){
        return true;
    }
    if(this->price == other.price){
        if(this->id > other.id){
            return true;
        }
    }
    return false;   
}

bool Car::operator==(const Car &other){
    if(this->id == other.id){
        return true;
    }
    return false;
}

ostream& operator<<(ostream &os, const Car &car){
    os << "Car id: " << car.getId() << " || Car name: " << car.getName() << " || Car price: " << car.getPrice() << endl;
    return os;
} 