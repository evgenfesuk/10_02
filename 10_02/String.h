#pragma once
class String
{
private:
	char* str; // указатель на строку
public:
	String(char* s); // конструктор с одним параметром
	~String(); // деструктор
	void display(); // покажем строку на экране

};

