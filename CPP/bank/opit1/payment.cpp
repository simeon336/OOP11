#include "payment.hh"
#include <iostream>
using namespace std;
Payment::Payment(){}

void Payment::vnasqne(const double &amount){
    double newAmount = amount - 0.03 * amount;
    setAmount(getAmount() + newAmount);
}

void Payment::teglene(const double &amount){
    if(amount > getAmount()){
        throw invalid_argument("You cant izteglish poveche ot kolkoto imash!!");
    }
    setAmount(getAmount() - amount);
}