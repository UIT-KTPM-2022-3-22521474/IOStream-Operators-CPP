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
class CSphere
{
private:
	C3DPoint center;
	float r;
public:
	friend istream& operator >> (istream&, CSphere&);
	friend ostream& operator << (ostream&, CSphere&);
};

int main()
{
	cout << "Problem 012 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CSphere o;
	cin >> o;
	cout << o;
	return 1;
}

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