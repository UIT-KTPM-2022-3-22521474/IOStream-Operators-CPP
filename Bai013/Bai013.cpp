#include<iostream>
#include <iomanip>
using namespace std;

class CStaticArr
{
private:
	int n;
	int arr[100];
public:
	friend istream& operator >> (istream&, CStaticArr&);
	friend ostream& operator << (ostream&, CStaticArr&);
};

int main()
{
	cout << "Problem 013 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CStaticArr arr;
	cin >> arr;
	cout << arr;
	return 1;
}

istream& operator>>(istream& is, CStaticArr& arr)
{
	cout << "\nEnter n - size of array:	";
	is >> arr.n;
	cout << endl;
	for (int i = 0; i < arr.n; i++)
	{
		cout << "Enter arr[" << i << "]:			";
		is >> arr.arr[i];
	}
	return is;
}

ostream& operator<<(ostream& os, CStaticArr& arr)
{
	cout << "\nThe inputted array is:" << endl;
	for (int i = 0; i < arr.n; i++)
		cout << setw(10) << setprecision(6) << arr.arr[i];
	cout << endl;
	return os;
}