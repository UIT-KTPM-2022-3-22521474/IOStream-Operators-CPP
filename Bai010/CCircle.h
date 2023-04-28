#include "C2DPoint.h"

class CCircle
{
private:
	C2DPoint center;
	float r;
public:
	friend istream& operator>>(istream&, CCircle&);
	friend ostream& operator<<(ostream&, CCircle&);
}; 

istream& operator>>(istream& is, CCircle& o)
{
	cout << "\nEnter circle centerpoint's coordinate:" << endl;
	is >> o.center;
	cout << "Enter circle's radius:				";
	is >> o.r;
	return is;
}
ostream& operator<<(ostream& os, CCircle& o)
{
	os << "\nThe circle's centerpoint's coordinate is:	" << o.center << "." << endl;
	os << "The circle's radius is:				" << o.r << "." << endl;
	return os;
}