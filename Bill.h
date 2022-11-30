#pragma once
#include "Receipt.h"
class Bill :
    public Receipt
{
public:
    Bill();
    Bill(string number, double price):Receipt(number, price) {};
    ~Bill();
};

