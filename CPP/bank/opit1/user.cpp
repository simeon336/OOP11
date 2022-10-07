#include "user.hh"
#include <iostream>
using namespace std;

User::User(){}

User::User(const int &id, const string &name){
    this->id = id;
    this->name = name;
}

int User::getId()const{
    return this->id;
}

string User::getName()const{
    return this->name;
}