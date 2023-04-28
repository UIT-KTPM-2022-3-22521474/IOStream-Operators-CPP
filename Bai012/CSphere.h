#include "C3DPoint.h"

class CSphere
{
private:
	C3DPoint center;
	float r;
public:
	friend istream& operator >> (istream&, CSphere&);
	friend ostream& operator << (ostream&, CSphere&);
};

istream& operator>>(istream& is, CSphere& o)
{
	cout << "\nEnter sphere centerpoint's coordinate:" << endl;
	is >> o.center;
	cout << "Enter sphere's radius:				";
	is >> o.r;
	return is;
}
ostream& operator<<(ostream& os, CSphere& o)
{
	os << "\nThe sphere's centerpoint's coordinate is:	" << o.center << "." << endl;
	os << "The sphere's radius is:				" << o.r << "." << endl;
	return os;
}