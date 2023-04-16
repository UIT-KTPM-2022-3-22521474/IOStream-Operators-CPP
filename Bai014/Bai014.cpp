#include<iostream>
using namespace std;

class CDynamicArr
{
private:
	int n;
	int* a;
public:
	friend istream& operator >> (istream&, CDynamicArr&);
	friend ostream& operator << (ostream&, CDynamicArr&);
};

int main()
{
	cout << "Problem 014 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CDynamicArr arr;
	cin >> arr;
	cout << arr;
	return 1;
}

istream& operator >> (istream& is, CDynamicArr& arr)
{
	cout << "\nEnter n - size of array:	";
	is >> arr.n;
	arr.a = new int[arr.n];
	for (int i = 0; i < arr.n; i++)
	{
		cout << "Enter arr[" << i << "]:			";
		is >> arr.arr[i];
	}
	return is;
}

ostream& operator << (ostream& os, CDynamicArr& arr)
{
	cout << "\nThe inputted array is:" << endl;
	for (int i = 0; i < arr.n; i++)
		cout << setw(10) << setprecision(6) << arr.arr[i];
	cout << endl;
	return os;
}