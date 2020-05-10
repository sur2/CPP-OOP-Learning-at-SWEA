#include "point.h"
#include <iostream>
using namespace std;

void Point::Print()
{
	cout << "x = " << x << ", y = " << y << endl;
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