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
	cout << "����Ʈ ������" << endl;
}

Person::Person(const char* name, int age)
{
	this->name = new char[20];
	strcpy(this->name, name);
	this->age = age;
	cout << "���� �ִ� ������" << endl;
}

Person::Person(const Person& arg)
{
	name = new char[20];
	strcpy(name, arg.name);
	age = arg.age;
	cout << "���� ������" << endl;
}

Person::~Person()
{
	delete[] name;
	cout << "�Ҹ���" << endl;
}

void Person::Show() const
{
	cout << "name : " << name << ", age : " << age << endl;
}