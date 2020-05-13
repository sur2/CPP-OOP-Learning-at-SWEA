#include "point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	cout << "디폴트 생성자" << endl;
}

Point::Point(int xpos, int ypos)
{
	x = xpos;
	y = ypos;
	cout << "인자 있는 생성자" << endl;
}

void Point::Print()
{
	cout << "x = " << x << ", y = " << y << endl;
}
/*
Point::Point(int xpos, int ypos)
	: x(xpos), y(ypos)
{
	cout << "초기화 리스트 생성자" << endl;
}
*/

Point::~Point()
{
	cout << "소멸자" << endl;
}

int Point::GetX()
{
	return x;
}

int Point::GetY()
{
	return y;
}

void Point::SetX(int xpos)
{
	x = xpos;
}

void Point::SetY(int ypos)
{
	y = ypos;
}