#include <iostream>
using namespace std;

class CTime
{
private:
	int HH;
	int MM;
	int SS;
public:
	friend istream& operator >> (istream&, CTime&);
	friend ostream& operator << (ostream&, CTime&);
};

int main()
{
	cout << "Problem 007 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CTime t;
	cin >> t;
	cout << t;
	return 1;
}

istream& operator >> (istream& is, CTime& t)
{
	cout << "\nEnter your time" << endl;
	cout << "Enter the hours:		";
	is >> t.HH;
	cout << "Enter the minutes:		";
	is >> t.MM;
	cout << "Enter the seconds:		";
	is >> t.SS;
	return is;
}

ostream& operator << (ostream& os, CTime& t)
{
	os << "\nThe inputted time is:		" << t.HH << ":" << t.MM << ":" << t.SS << "." << endl;
	return os;
}