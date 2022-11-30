#include <conio.h>
#include <windows.h>
#include <iostream>
#include "Document.h"
#include"Bill.h"
#include "Invoice.h"
#include "Receipt.h"
using namespace std;

Document* Document::begin = NULL;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Invoice inv("1", "Стройка", 15000);
	Bill b("2", 34.50);
	Receipt rec("3", 200000);
	Document* D1 = &inv, * D2 = &b, * D3 = &rec;
	
	D1->Show();
	D2->Show();
	D3->Show();
	cout << "\n";
	//Добавление в список с помощью метода
	//D1->Add();
	//D2->Add();
	//D3->Add();
	//Document::ListPrint();
	// Добавление в список с помощью констурктора
	Invoice inv1("4", "Стяжка полов", 20000);
	Bill b1("5", 4343);
	Receipt rec1("6", 1001);
	Document* D4 = &inv1, * D5 = &b1, * D6 = &rec1;
	Document::ListPrint();

	
}

