#include "C2DPoint.h"

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