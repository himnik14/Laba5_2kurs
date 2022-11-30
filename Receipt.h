#pragma once
#include "Document.h"
class Receipt :
    public Document
{
public:
    Receipt();
    Receipt(string number, double price);
    virtual ~Receipt();
    void Show() override;

protected:
    double price;
};

