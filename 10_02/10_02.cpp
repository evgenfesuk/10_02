// 10_02.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include "String.h"
#include <iostream> 
#include <cstring> // ��� strcpy(), � �.�. using namespace std; /////////////////////////////////////////////////////////// 


using namespace std;

int main()
{
	String s1 = "test string2";
	cout << "s1 = ";
	s1.display();
	s1.upIt();
	s1.display();
	system("pause");
	return 0;
}

