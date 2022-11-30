#include "Invoice.h"
Invoice::Invoice()
{

}

Invoice::~Invoice()
{

}

void Invoice::Show() 
{
	cout << "Номер документа: " << number << "\nСтомость, указанная в документе: "
		<< price << "\nТип работ: " << typeOfWork << endl;
}