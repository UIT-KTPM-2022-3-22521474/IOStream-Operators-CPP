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

int main()
{
	cout << "Problem 001 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	C2DPoint p;
	cin >> p;
	cout << p;
	return 1;
}

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