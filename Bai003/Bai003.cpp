#include <iostream>
using namespace std;

class CFraction
{
private:
	int numerator;
	int denominator;
public:
	friend istream& operator >> (istream&, CFraction&);
	friend ostream& operator << (ostream&, CFraction&);
};

int main()
{
	cout << "Problem 003 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CFraction ft;
	cin >> ft;
	cout << ft;
	return 1;
}

istream& operator >> (istream& is, CFraction& ft)
{
	cout << "\nEnter your fraction:" << endl;
	cout << "Enter fraction's numerator:	";
	is >> ft.numerator;
	cout << "Enter fraction's denominator:	";
	is >> ft.denominator;
	return is;
}

ostream& operator << (ostream& os, CFraction& ft)
{
	os << "\nThe inputted fraction is:	" << ft.numerator << "/" << ft.denominator << "." << endl;
	return os;
}