#include<iostream>
using namespace std;

class C3DPoint
{
private:
	float x;
	float y;
	float z;
public:
	friend istream& operator >> (istream&, C3DPoint&);
	friend ostream& operator << (ostream&, C3DPoint&);
};

istream& operator>>(istream& is, C3DPoint& p)
{
	cout << "Enter x:					";
	is >> p.x;
	cout << "Enter y:					";
	is >> p.y;
	cout << "Enter y:					";
	is >> p.z;
	return is;
}

ostream& operator<<(ostream& os, C3DPoint& p)
{
	os << "(" << p.x << ", " << p.y << ", " << p.z << ")";
	return os;
}