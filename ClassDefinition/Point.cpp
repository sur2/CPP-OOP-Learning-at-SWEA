#include "point.h"
#include <iostream>
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	cout << "����Ʈ ������" << endl;
}

Point::Point(int xpos, int ypos)
{
	x = xpos;
	y = ypos;
	cout << "���� �ִ� ������" << endl;
}

void Point::Print()
{
	cout << "x = " << x << ", y = " << y << endl;
}
/*
Point::Point(int xpos, int ypos)
	: x(xpos), y(ypos)
{
	cout << "�ʱ�ȭ ����Ʈ ������" << endl;
}
*/

Point::~Point()
{
	cout << "�Ҹ���" << endl;
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