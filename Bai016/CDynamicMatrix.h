#include <iostream>
#include <iomanip>
using namespace std;

class CDynamicMatrix
{
private:
	int m;
	int n;
	int** mat;
public:
	friend istream& operator >> (istream&, CDynamicMatrix&);
	friend ostream& operator << (ostream&, CDynamicMatrix&);
};

istream& operator>>(istream& is, CDynamicMatrix& dmat)
{
	cout << "\nEnter the number of row of the matrix:			";
	is >> dmat.m;
	cout << "Enter the number of column of the matrix:		";
	is >> dmat.n;
	dmat.mat = new int* [dmat.m];
	for (int i = 0; i < dmat.m; i++)
	{
		dmat.mat[i] = new int[dmat.n];
		for (int j = 0; j < dmat.n; j++)
		{
			cout << "Enter mat[" << i << "][" << j << "]:					";
			is >> dmat.mat[i][j];
		}
	}
	return is;
}
ostream& operator<<(ostream& os, CDynamicMatrix& dmat)
{
	cout << "\nThe inputted matrix is:" << endl;
	for (int i = 0; i < dmat.m; i++)
	{
		for (int j = 0; j < dmat.n; j++)
			os << setw(10) << setprecision(6) << dmat.mat[i][j];
		os << endl;
	}
	return os;
}