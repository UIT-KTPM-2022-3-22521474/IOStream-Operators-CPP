#include<iostream>
using namespace std;

class CMonomial
{
private:
	int coefficient;
	int power;
public:
	friend istream& operator >> (istream&, CMonomial&);
	friend ostream& operator << (ostream&, CMonomial&);
};

istream& operator >> (istream& is, CMonomial& mn)
{
	cout << "Enter the coefficient:	";
	is >> mn.coefficient;
	cout << "Enter the power:	";
	is >> mn.power;
	return is;
}

ostream& operator << (ostream& os, CMonomial& mn)
{
	os << mn.coefficient << "x^" << mn.power;
	return os;
}