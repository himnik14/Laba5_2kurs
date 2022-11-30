#pragma once
#include "Receipt.h"
class Invoice :
    public Receipt
{
public:
    Invoice();
    Invoice(string number,string typeOfWork, double price) :Receipt(number, price) { this->typeOfWork = typeOfWork; };
    virtual ~Invoice();
    void Show() override;
protected:
    string typeOfWork;

};

