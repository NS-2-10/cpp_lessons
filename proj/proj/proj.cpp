#include <iostream>
#include <cmath>
using namespace std;

// pow(); log(); sqrt();

int main()
{
	float y, a, b, x;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "x = ";
	cin >> x;

	y = (10 * a - sqrt(4 * b)) / pow(x - 2, 2) - log(8) / (16 * x) + sqrt(a + b);
	cout << "y = " << y << endl;

	return 0;
}
