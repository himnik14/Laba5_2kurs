#include "Invoice.h"
Invoice::Invoice()
{

}

Invoice::~Invoice()
{

}

void Invoice::Show() 
{
	cout << "����� ���������: " << number << "\n��������, ��������� � ���������: "
		<< price << "\n��� �����: " << typeOfWork << endl;
}