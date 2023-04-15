#include <iostream>
using namespace std;

class CComplexNumber
{
private:
	int real;
	int imaginary;
public:
	friend istream& operator >> (istream&, CComplexNumber&);
	friend ostream& operator << (ostream&, CComplexNumber&);
};

int main()
{
	cout << "Problem 005 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CComplexNumber cn;
	cin >> cn;
	cout << cn;
	return 1;
}

istream& operator >> (istream& is, CComplexNumber& cn)
{
	cout << "\nEnter your 2D point:" << endl;
	cout << "Enter the real part:				";
	is >> cn.real;
	cout << "Enter the imaginary part:				";
	is >> cn.imaginary;
	return is;
}

ostream& operator << (ostream& os, CComplexNumber& cn)
{
	os << "\nThe inputted complex number is: " << cn.real << " + " << cn.imaginary << "i." << endl;
	return os;
}