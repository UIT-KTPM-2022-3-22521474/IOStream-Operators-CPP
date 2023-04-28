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