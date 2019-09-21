#include <iostream>
using namespace std;

// продумать деление на 0
// +, -, *, /

int main ()
{
	setlocale (LC_ALL, "RUS");

	float a, b;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "a + b = " << a + b << endl;
	cout << "a - b = " << a - b << endl;
	cout << "a * b = " << a * b << endl;

	if (b != 0)
		cout << "a / b = " << a / b << endl;
	else
		cout << "делить на 0 не круто" << endl;

    return 0;
}