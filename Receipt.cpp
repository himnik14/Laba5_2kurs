#include "Receipt.h"

Receipt::Receipt()
{

}

Receipt::~Receipt()
{

}

Receipt::Receipt(string number, double price)
{
	this->number = number;
	this->price = price;
}

void Receipt::Show()
{
	cout << "Номер документа: " << number << "\nСтомость, указанная в документе: " << price << "\n";
}