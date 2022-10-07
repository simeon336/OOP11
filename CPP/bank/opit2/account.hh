#ifndef _ACCOUNT_HH_
#define _ACCOUNT_HH_

class Account{
    int id;
    double amount;
public:
    Account(){}
    Account(const int& id, const double &amount){}
    int getId()const;
    double getAmount()const;
    virtual void teglene() = 0;
    virtual void vnasqne() = 0;

};

#endif