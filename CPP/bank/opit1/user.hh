#ifndef _USER_HH_
#define _USER_HH_
#include <string>
using namespace std;

class User{
    int id;
    string name;
public:
    User(){}
    User(const int &id, const string &name){}
    int getId()const;
    string getName()const;
};


#endif