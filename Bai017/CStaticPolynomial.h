#include "CMonomial.h"

class CStaticPolynomial
{
private:
	int n;
	CMonomial polyarr[100];
public:
	friend istream& operator >> (istream&, CStaticPolynomial&);
	friend ostream& operator << (ostream&, CStaticPolynomial&);
};

istream& operator>>(istream& is, CStaticPolynomial& pn)
{
	cout << "\nEnter n - the number of monomial:	";
	is >> pn.n;
	for (int i = 0; i < pn.n; i++)
	{
		switch ((i + 1) % 10)
		{
		case 1:
		{
			cout << "\nEnter the " << i + 1 << "st monomial:" << endl;
			break;
		}
		case 2:
		{
			cout << "\nEnter the " << i + 1 << "nd monomial:" << endl;
			break;
		}
		case 3:
		{
			cout << "\nEnter the " << i + 1 << "rd monomial:" << endl;
			break;
		}
		default:
		{
			cout << "\nEnter the " << i + 1 << "th monomial:" << endl;
			break;
		}
		}
		is >> pn.polyarr[i];
	}
	return is;
}

ostream& operator<<(ostream& os, CStaticPolynomial& pn)
{
	if (pn.n <= 0)
	{
		cout << "\nThere was no monomial inputted, so the program can't create the polymonial." << endl;
		return os;
	}
	cout << "\nThe polymonial is:	";
	for (int i = 0; i < pn.n; i++)
	{
		os << pn.polyarr[i];
		if (i < (pn.n - 1))
		{
			cout << " + ";
		}
	}
	cout << "." << endl;
	return os;
}