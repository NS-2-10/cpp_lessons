#include <iostream>
using namespace std;

// продумать деление на 0
// +, -, *, /

int main()
{
	setlocale(LC_ALL, "RUS");

	float misha = 0, nikita = 0;

	cout << "a = ";
	cin >> misha;

	cout << "b = ";
	cin >> nikita;

	cout << "a + b = " << misha + nikita << endl;
	cout << "a - b = " << misha - nikita << endl;
	cout << "b - a = " << nikita - misha << endl;
	cout << "a * b = " << misha * nikita << endl;
	if (misha == 0)
		cout << "a = 0, делить b на 0 не круто" << endl;
	else
		cout << "b / a = " << nikita / misha << endl;

	if (nikita == 0)
		cout << "b = 0, делить a на 0 не круто" << endl;
	else
		cout << "a / b = " << misha / nikita << endl;

	return 0;
}