#ifndef PERSON_H
#define	PERSON_H

class Person
{
private:
	char* name;
	int age;

public:
	Person();
	Person(const char* name, int age);
	Person(const Person& arg);
	~Person();
	void Show() const;
	
};
#endif