#include <iostream>
using namespace std;

class CDate
{
private:
	int DD;
	int MM;
	int YYYY;
public:
	friend istream& operator >> (istream&, CDate&);
	friend ostream& operator << (ostream&, CDate&);
};

istream& operator >> (istream& is, CDate& d)
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

ostream& operator << (ostream& os, CDate& d)
{
	os << "\nThe inputted date is:	" << d.DD << "/" << d.MM << "/" << d.YYYY << "." << endl;
	return os;
}