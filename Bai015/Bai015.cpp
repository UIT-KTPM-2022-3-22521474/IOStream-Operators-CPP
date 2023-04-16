#include <iostream>
#include <iomanip>
using namespace std;

class CStaticMatrix
{
private:
	int n;
	int m;
	int mat[100][100];
public:
	friend istream& operator >> (istream&, CStaticMatrix&);
	friend ostream& operator << (ostream&, CStaticMatrix&);
};

int main()
{
	cout << "Problem 015 - To Vinh Tien - 22521474 - BT_OOP_W3" << endl;
	CStaticMatrix smat;
	cin >> smat;
	cout << smat;
	return 1;
}

istream& operator>>(istream& is, CStaticMatrix& smat)
{
	cout << "\nEnter the number of row of the matrix:			";
	is >> smat.n;
	cout << "Enter the number of column of the matrix:		";
	is >> smat.m;
	for (int i = 0; i < smat.n; i++)
		for (int j = 0; j < smat.m; j++)
		{
			cout << "Enter smat[" << i << "][" << j << "]:					";
			is >> smat.mat[i][j];
		}
	return is;
}

ostream& operator<<(ostream& os, CStaticMatrix& smat)
{
	cout << "\nThe inputted matrix is:" << endl;
	for (int i = 0; i < smat.n; i++)
	{
		for (int j = 0; j < smat.m; j++)
			cout << setw(10) << setprecision(6) << smat.mat[i][j];
		cout << endl;
	}
	return os;
}