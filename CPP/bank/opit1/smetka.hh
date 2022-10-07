#ifndef _SMETKA_HH_
#define _SMETKA_HH_

class Smetka{
    int id;
    double amount;
public:
    Smetka(){}
    Smetka(const int &id, const double &amount){}
    int getId()const;
    double getAmount()const;
    void setAmount(const double &amount);
    virtual void teglene() = 0;
    virtual void vnasqne() = 0;
};

#endif