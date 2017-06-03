#include "stdafx.h"
#include "String.h"
#include <iostream> 
#include <cstring>

using namespace std;


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
