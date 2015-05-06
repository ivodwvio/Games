#include <iostream>
using namespace std;

void hiworld();
void variables();

int main()
{
	hiworld();

	return 0;
}

void hiworld()
{
	cout << "Hi World!\n";
}

void variables()
{
	int tempInt;
	float tempFloat = 32.6543543324f;
	double tempDouble = 32.6543543324;

	tempInt = 45;

	cout << "tempInt = " << tempInt << endl;
	cout << "tempFloat = " << tempFloat << endl;
	cout << "tempDouble = " << tempDouble << endl;
}
