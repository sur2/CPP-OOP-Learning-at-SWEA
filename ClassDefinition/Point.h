#ifndef POINT_H
#define POINT_H

class Point {
// private
public:
	int x;
	int y;
public:
	// 디폴트 생성자
	Point();
	// 인자가 있는 생성자
	Point(int xpos, int ypos);
	// Point(int xpos = 0, int ypos = 0);
	// 소멸자
	~Point();
	void Print();
	int GetX();
	int GetY();
	void SetX(int);
	void SetY(int);
};
#endif