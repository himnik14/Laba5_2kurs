#pragma once
#include <string>
#include <iostream>
using namespace std;
class Document
{
public:
	virtual ~Document() = 0;
	void Add();
	Document();
	static void ListPrint();
	virtual void Show() = 0;
	static int GetSize() { return Size; };
protected:
	static int Size;
	static Document* begin;
	string number;
	Document* nextItem = NULL;
};

inline Document::~Document() {}