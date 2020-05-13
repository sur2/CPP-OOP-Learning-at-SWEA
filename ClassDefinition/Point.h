#ifndef POINT_H
#define POINT_H

class Point {
// private
public:
	int x;
	int y;
public:
	// ����Ʈ ������
	Point();
	// ���ڰ� �ִ� ������
	Point(int xpos, int ypos);
	// Point(int xpos = 0, int ypos = 0);
	// �Ҹ���
	~Point();
	void Print();
	int GetX();
	int GetY();
	void SetX(int);
	void SetY(int);
};
#endif