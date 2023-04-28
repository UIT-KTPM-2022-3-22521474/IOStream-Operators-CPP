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