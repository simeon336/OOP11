#ifndef _PAYMENT_HH_
#define _PAYMENT_HH_
#include "smetka.hh"

class Payment : public Smetka{
public:
    Payment(){}
    Payment(const int &id, const double &amount) : Smetka(id, amount){}

    void teglene(const double &amount);
    void vnasqne(const double &amount);
};  

#endif