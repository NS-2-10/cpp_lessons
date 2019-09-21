#include <iostream>
using namespace std;

/* 
   вводим 3 числа, проверяем на четность
   если да, то выводим.
   если ни одного - говорим об этом.
*/

int main ()
{
	setlocale(LC_ALL, "RUS");

	// первый способ
	cout << "способ #1" << endl;
	int a1, b1, c1;

	cout << "первое число: ";
	cin >> a1;

	cout << "второе число: ";
	cin >> b1;

	cout << "третье число: ";
	cin >> c1;

	if (a1 % 2 == 0)
		cout << a1 << endl;

	if (b1 % 2 == 0)
		cout << b1 << endl;

	if (c1 % 2 == 0)
		cout << c1 << endl;

	if (a1 % 2 == 1	&& b1 % 2 == 1 && c1 % 2 == 1)
		cout << "нет четных чисел" << endl;

	// второй способ
	cout << "способ #2" << endl;
	int a2, b2, c2;
	int n = 0;

	cout << "первое число: ";
	cin >> a2;

	cout << "второе число: ";
	cin >> b2;

	cout << "третье число: ";
	cin >> c2;

	if (a2 % 2 == 0)
	{
		cout << a2 << endl;
		n++;
	}

	if (b2 % 2 == 0)
	{
		cout << b2 << endl;
		n++;
	}

	if (c2 % 2 == 0)
	{
		cout << c2 << endl;
		n++;
	}

	if (n == 0)
		cout << "нет четных чисел" << endl;

	return 0;
}

