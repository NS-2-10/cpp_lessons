#include <iostream>
using namespace std;

// продумать деление на 0
// +, -, *, /

int main()
{
	float c, v;

	cout << "c = "; cin >> c;
	cout << "v = "; cin >> v;

	cout << "c + v = " << c + v << endl;
	cout << "c * v = " << c * v << endl;
	cout << "c - v = " << c - v << endl;
	cout << "v - c = " << v - c << endl;

	if (c == 0) cout << "v / c = no solution" << endl;
	else cout << "v / c = " << v / c << endl;

	if (v == 0) cout << "c / v = no solution" << endl;
	else cout << "c / v = " << c / v << endl;

	return 0;
}