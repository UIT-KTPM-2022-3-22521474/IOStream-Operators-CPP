#include<iostream>
using namespace std;

class C2DPoint
{
private:
	float x;
	float y;
public:
	friend istream& operator>>(istream&, C2DPoint&);
	friend ostream& operator<<(ostream&, C2DPoint&);
};
class CCircle
{
private:
	C2DPoint center;
	float r;
public:
	friend istream& operator>>(istream&, CCircle&);
	friend ostream& operator<<(ostream&, CCircle&);
};

int main()
{
	cout << "Problem 010 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CCircle o;
	cin >> o;
	cout << o;
	return 1;
}

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
istream& operator>>(istream& is, C2DPoint& p)
{
	cout << "Enter x:					";
	is >> p.x;
	cout << "Enter y:					";
	is >> p.y;
	return is;
}

ostream& operator<<(ostream& os, C2DPoint& p)
{
	os << "(" << p.x << ", " << p.y << ")";
	return os;
}