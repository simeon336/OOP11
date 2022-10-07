#include "account.hh"

Account::Account(){}

Account::Account(const int& id, const double &amount){
    this->id = id;
    this->amount = amount;
}

int Account::getId()const{
    return this->id;
}

double Account::getAmount()const{
    return this->amount;
}