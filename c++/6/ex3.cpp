#include <iostream>
#include <cmath>
using namespace std;

// решаем пример с картинки
// a*x^2 + b*x + c = 0

int main ()
{
	float a, b, c, x1, x2, d;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "c = ";
	cin >> c;

	d = pow (b, 2) - 4 * a * c;

	if (d > 0)
	{
		x1 = -b - sqrt (d) / (2 * a);
		cout << "x1 = " << x1 << endl;

		x2 = -b + sqrt (d) / (2 * a);
		cout << "x2 = " << x2 << endl;
	}

	if (d == 0)
	{
		x1 = -b / (2 * a);
		cout << "x1 = " << x1 << endl;
	}

	if (d < 0)
		cout << "корней нет!" << endl;

	return 0;
}
