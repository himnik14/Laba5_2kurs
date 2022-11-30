#include "Document.h"

int Document::Size = 0;

Document::Document()
{
	Add();
}

void Document::Add()
{
	if (begin == NULL)
		begin = this;
	else
	{
		Document* doc = begin;
		while (doc->nextItem != NULL)
			doc = doc->nextItem;
		doc->nextItem = this;
	}
	Size++;
}
void Document::ListPrint()
{
	if (begin == NULL)
		cout << "������ ������!\n";
	else
	{
		int i = 0;
		cout << "������ �������� " << Document::GetSize() << " ���������\n";
		Document* doc = begin;
		while (doc != NULL)
		{
			cout << "--------------------\n";
			cout << i + 1 << " ������� ������: \n";
			cout << "--------------------\n";
			doc->Show();
			doc = doc->nextItem;
			i++;
		}
		cout << "--------------------\n";

	}
}