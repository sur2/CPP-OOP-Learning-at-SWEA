#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person p1("È«±æµ¿", 24);
	Person p2(p1);
	p2.Show();
	
	Person* ptr1 = new Person("Çã±Õ", 59);
	Person* ptr2 = new Person(*ptr1);
	ptr2->Show();

	delete ptr2;
	delete ptr1;

	return 0;
}