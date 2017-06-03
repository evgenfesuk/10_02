#include "stdafx.h"
#include "String.h"
#include <iostream> 
#include <cstring>

using namespace std;


String::String()
{
}

String::String(char* s) // конструктор с одним параметром
{
	int length = strlen(s); // вычисляем длину строки
	str = new char[length + 1]; // выделяем необходимую память
	strcpy(str, s); // копируем строку
}


String::~String() // деструктор
{
	cout << "deleting string\n";
	delete[] str; // освобождаем память
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
