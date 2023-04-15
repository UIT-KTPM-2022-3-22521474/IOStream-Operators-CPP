#include <iostream>
using namespace std;

class CMixedNumber
{
private:
	int intpt;
	int numerator;
	int denominator;
public:
	friend istream& operator >> (istream&, CMixedNumber&);
	friend ostream& operator << (ostream&, CMixedNumber&);
};

int main()
{
	cout << "Problem 004 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CMixedNumber mn;
	cin >> mn;
	cout << mn;
	return 1;
}

istream& operator >> (istream& is, CMixedNumber& mn)
{
	cout << "\nEnter your mixed number:" << endl;
	cout << "Enter integer part:			";
	is >> mn.intpt;
	cout << "Enter fraction part's numerator:	";
	is >> mn.numerator;
	cout << "Enter fraction part's denominator:	";
	is >> mn.denominator;
	return is;
}

ostream& operator << (ostream& os, CMixedNumber& mn)
{
	os << "\nThe inputted mixed number is:		" << mn.intpt << "(" << mn.numerator << "/" << mn.denominator << ")." << endl;	
	return os;
}