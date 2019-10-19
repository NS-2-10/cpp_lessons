#include <iostream>
#include <cmath>
using namespace std;

// pow(); log(); sqrt();

int main()
{
	float y = 0, a = 0, b = 0, x = 0;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "x = ";
	cin >> x;

	y = (a - 1) * (b + 1) / (3 * b - x) * (7 * pow(a, 2) - 3 * pow(b, 3)) / (20 * pow(x, 4)) / ((17 * pow(a, 5) * sqrt(b)) / (30 * x));
	cout << "y = " << y << endl;

	return 0;
}
