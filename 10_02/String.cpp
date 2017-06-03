#include "stdafx.h"
#include "String.h"
#include <iostream> 
#include <cstring>

using namespace std;


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
