#include <iostream>
using namespace std;

class CGDate
{
private:
	int DD;
	int MM;
	int YYYY;
public:
	friend istream& operator >> (istream&, CGDate&);
	friend ostream& operator << (ostream&, CGDate&);
};

int main()
{
	cout << "Problem 006 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CGDate d;
	cin >> d;
	cout << d;
	return 1;
}

istream& operator >> (istream& is, CGDate& d)
{
	cout << "\nEnter your date" << endl;
	cout << "Enter the date:		";
	is >> d.DD;
	cout << "Enter the month:	";
	is >> d.MM;
	cout << "Enter the year:		";
	is >> d.YYYY;
	return is;
}

ostream& operator << (ostream& os, CGDate& d)
{
	os << "\nThe inputted date is:	" << d.DD << "/" << d.MM << "/" << d.YYYY << "." << endl;
	return os;
}