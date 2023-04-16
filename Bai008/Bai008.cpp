#include <iostream>
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

int main()
{
	cout << "Problem 008 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CMonomial mn;
	cin >> mn;
	cout << mn;
	return 1;
	return 1;
}

istream& operator >> (istream& is, CMonomial& mn)
{
	cout << "\nEnter your monomial:" << endl;
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
	os << "\nThe inputted monomial is:	" << mn.coefficient << mn.variable << "^" << mn.power << "." << endl;
	return os;
}