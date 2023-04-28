#include <iostream>
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

istream& operator >> (istream& is, C2DPoint& p)
{
	cout << "\nEnter your 2D point:" << endl;
	cout << "Enter x:				";
	is >> p.x;
	cout << "Enter y:				";
	is >> p.y;
	return is;
}

ostream& operator << (ostream& os, C2DPoint& p)
{
	os << "\nThe inputted point's coordinate is:	(" << p.x << ", " << p.y << ")." << endl;
	return os;
}