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
	cout << "����� ���������: " << number << "\n��������, ��������� � ���������: " << price << "\n";
}