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

	tempInt = 45;

	cout << "tempInt = " << tempInt << endl;
}
