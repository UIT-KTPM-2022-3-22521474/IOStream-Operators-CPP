#include<iostream>
using namespace std;

class CMonomial
{
private:
	int coefficient;
	char variable;
	int power;
public:
	friend istream& operator >> (istream&, CMonomial&);
	friend ostream& operator << (ostream&, CMonomial&);
};

class CStaticPolynomial
{
private:
	int n;
	CMonomial polyarr[100];
public:
	friend istream& operator >> (istream&, CStaticPolynomial&);
	friend ostream& operator << (ostream&, CStaticPolynomial&);
};

int main()
{
	cout << "Problem 017 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CStaticPolynomial pn;
	cin >> pn;
	cout << pn;
	return 1;
}

istream& operator >> (istream& is, CMonomial& mn)
{
	cout << "Enter the coefficient:	";
	is >> mn.coefficient;
	cout << "Enter the variable:	";
	is >> mn.variable;
	cout << "Enter the power:	";
	is >> mn.power;
	return is;
}

ostream& operator << (ostream& os, CMonomial& mn)
{
	os << mn.coefficient << mn.variable << "^" << mn.power;
	return os;
}

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