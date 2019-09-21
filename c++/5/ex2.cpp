#include <iostream>
#include <cmath>
using namespace std;

// pow(); log(); sqrt();

int main ()
{
	float y = 0;
	int a, b, x;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	cout << "x = ";
	cin >> x;

	y = (a + 20 * b) / pow (x, 3) * log(2 * x) - 1 / pow (a - 1, 2);

	cout << "y = " << y << endl;

    return 0; 
}
