#pragma once
class String
{
private:
	char* str;// ��������� �� ������
	char* upStr; 
public:
	String();
	String(char* s); // ����������� � ����� ����������
	~String(); // ����������
	void display(); // ������� ������ �� ������
	void upIt();

};

