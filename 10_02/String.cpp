#include "stdafx.h"
#include "String.h"
#include <iostream> 
#include <cstring>

using namespace std;


String::String()
{
}

String::String(char* s) // ����������� � ����� ����������
{
	int length = strlen(s); // ��������� ����� ������
	str = new char[length + 1]; // �������� ����������� ������
	strcpy(str, s); // �������� ������
}


String::~String() // ����������
{
	cout << "deleting string\n";
	delete[] str; // ����������� ������
}

void String::display()
{
	cout << str << endl;
}

void String::upIt()
{
	int length = strlen(str);
	char* tmp  = str;
	for (int i = 0; i < length; i++)
	{
		tmp[i] = toupper(tmp[i]);
	}
}
