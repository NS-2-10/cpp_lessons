#include <iostream>
using namespace std;

/* вводим 3 числа, проверяем на четность если да, то выводим
   если ни одного - говорим об этом */

int main()
{
	setlocale(LC_ALL, "RUS");

	int n1, n2, n3;

	cout << "n1 = ";
	cin >> n1;

	cout << "n2 = ";
	cin >> n2;

	cout << "n3 = ";
	cin >> n3;

	// #1
	if(n1 % 2 == 0) cout << n1 << endl;
	if(n2 % 2 == 0) cout << n2 << endl;
	if(n3 % 2 == 0) cout << n3 << endl;
	if (n1 % 2 == 1 && n2 % 2 == 1 && n3 % 2 == 1)
		cout << "все нечет" << endl;

	// #2
	int n = 0;
	if (n1 % 2 == 0)
	{
		cout << n1 << endl;
		n++;
	}
	if (n2 % 2 == 0)
	{
		cout << n2 << endl;
		n++;
	}
	if (n3 % 2 == 0)
	{
		cout << n3 << endl;
		n++;
	}
	if(n == 0) cout << "все нечет" << endl;

	return 0;
}