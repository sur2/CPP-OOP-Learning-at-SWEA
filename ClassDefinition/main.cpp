#include "Point.h"
#include <iostream>
using namespace std;

int main(void)
{
	/*
	Point obj = {50, 100};

	//obj.SetX(5);
	//obj.SetY(10);

	obj.Print();
	*/

	// ����Ʈ ������ ȣ��
	Point obj1;
	cout << "obj1:";
	obj1.Print();
	
	// ���� �ִ� ������ ȣ��
	Point obj2(5, 10);
	cout << "obj2";
	obj2.Print();

	obj1 = obj2;
	cout << "obj1 = obj2 ����, obj1 : ";
	obj1.Print();

	cout << "����" << endl;

	return 0;
}
