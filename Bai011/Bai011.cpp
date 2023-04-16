#include<iostream>
using namespace std;

class C2DPoint
{
private:
	float x;
	float y;
public:
	friend istream& operator >> (istream&, C2DPoint&);
	friend ostream& operator << (ostream&, C2DPoint&);
};
class CTriangle
{
private:
	C2DPoint a;
	C2DPoint b;
	C2DPoint c;

public:
	friend istream& operator >> (istream&, CTriangle&);
	friend ostream& operator << (ostream&, CTriangle&);
};

int main()
{
	cout << "Problem 011 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CTriangle t;
	cin >> t;
	cout << t;
	return 1;
}

istream& operator>>(istream& is, CTriangle& t)
{
	cout << "\nEnter first point's coordinate:";
	is >> t.a;
	cout << "\nEnter second point's coordinate:";
	is >> t.b;
	cout << "\nEnter third point's coordinate:";
	is >> t.c;
	return is;
}
ostream& operator<<(ostream& os, CTriangle& t)
{
	os << "\nTriangle is created by 3 points:	" << t.a << ", " << t.b << ", " << t.c << "." << endl;
	return os;
}
istream& operator>>(istream& is, C2DPoint& p)
{
	cout << "\nEnter x:				";
	is >> p.x;
	cout << "Enter y:				";
	is >> p.y;
	return is;
}

ostream& operator<<(ostream& os, C2DPoint& p)
{
	os << "(" << p.x << ", " << p.y << ")";
	return os;
}