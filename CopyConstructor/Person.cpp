#define _CRT_SECURE_NO_WARNINGS

#include "Person.h"
#include <iostream>
#include <cstring>

using namespace std;

Person::Person()
{
	name = new char[20];
	strcpy(name, "");
	age = 0;
	cout << "디폴트 생성자" << endl;
}

Person::Person(const char* name, int age)
{
	this->name = new char[20];
	strcpy(this->name, name);
	this->age = age;
	cout << "인자 있는 생성자" << endl;
}

Person::Person(const Person& arg)
{
	name = new char[20];
	strcpy(name, arg.name);
	age = arg.age;
	cout << "복사 생성자" << endl;
}

Person::~Person()
{
	delete[] name;
	cout << "소멸자" << endl;
}

void Person::Show() const
{
	cout << "name : " << name << ", age : " << age << endl;
}