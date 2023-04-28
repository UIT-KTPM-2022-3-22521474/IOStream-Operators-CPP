#include<iostream>
using namespace std;

class CLine
{
private:
	float a;
	float b;
	float c;
public:
	friend istream& operator >> (istream&, CLine&);
	friend ostream& operator << (ostream&, CLine&);
};

istream& operator>>(istream& is, CLine& l)
{
	cout << "\nEnter your straight line equation: " << endl;
	cout << "Enter coefficient a:	";
	is >> l.a;
	cout << "Enter coefficient b:	";
	is >> l.b;
	cout << "Enter coefficient c:	";
	is >> l.c;
	return is;
}

ostream& operator<<(ostream& os, CLine& l)
{
	os << "\nThe inputted straight line equation is: " << l.a << "x + " << l.b << "y + " << l.c << " = 0";
	return os;
}