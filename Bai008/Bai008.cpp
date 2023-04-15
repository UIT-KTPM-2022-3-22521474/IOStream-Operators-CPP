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

	return 1;
}

istream