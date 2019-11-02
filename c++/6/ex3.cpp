#include <iostream>
#include <cmath>
using namespace std;

// решаем пример с картинки
// a*x^2 + b*x + c = 0

int main()
{
	float a, b, c, d = 0, x1 = 0, x2 = 0;

	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	d = pow(b, 2) - 4 * a * c;
	cout << "d = " << d << endl;
	
	if (d > 0)
	{
		x1 = (-b - sqrt(d)) / (2 * a);
		x2 = (-b + sqrt(d)) / (2 * a);

		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}
	if (d == 0)
	{
		x1 = -b / (2 * a);
		cout << "x1 = " << x1 << endl;
	}
	if (d < 0) cout << "no solution" << endl;
	return 0;
}
