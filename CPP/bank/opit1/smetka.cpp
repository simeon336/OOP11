#include "smetka.hh"

Smetka::Smetka(){}

Smetka::Smetka(const int &id, const double &amount){
    this->id = id;
    this->amount = amount;
}

int Smetka::getId()const{
    return this->id;
}

double Smetka::getAmount()const{
    return this->amount;
}

void Smetka::setAmount(const double &amount){

    this->amount = amount;
}