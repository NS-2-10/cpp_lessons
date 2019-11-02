#include <iostream>
using namespace std;

// a < b, a > b, a == b

int main()
{
	setlocale(LC_ALL, "RUS");

	int a, b;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;

	//#1
	if (a > b) cout << "a > b" << endl;
	if (a < b) cout << "a < b" << endl;
	if (a == b) cout << "a == b" << endl;
	
	//#2
	if (a > b) cout << "a > b" << endl;
	else
		if (a < b) cout << "a < b" << endl;
		else cout << "a == b" << endl;

	return 0;
}

