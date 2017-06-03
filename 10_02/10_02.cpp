// 10_02.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "String.h"
#include <iostream> 
#include <cstring> // для strcpy(), и т.д. using namespace std; /////////////////////////////////////////////////////////// 


using namespace std;

int main()
{
	String s1 = "test string";
	cout << "s1 = ";
	s1.display();
	system("pause");
	return 0;
}

