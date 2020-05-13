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

	// 디폴트 생성자 호출
	Point obj1;
	cout << "obj1:";
	obj1.Print();
	
	// 인자 있는 생성자 호출
	Point obj2(5, 10);
	cout << "obj2";
	obj2.Print();

	obj1 = obj2;
	cout << "obj1 = obj2 이후, obj1 : ";
	obj1.Print();

	cout << "종료" << endl;

	return 0;
}
