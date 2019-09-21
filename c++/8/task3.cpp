#include <iostream>
// rand(); srand();
#include <cstdlib>
// time();
#include <ctime>
using namespace std;

// меняем местами элементы от конца к середине массива

int main ()
{
	setlocale(LC_ALL, "rus");

	const int n = 10;
	int m[n], i, vedro = 0;

	srand(time(NULL));
	// заполнили и вывели
	for (i = 0; i < n; i++)
	{
		m[i] = rand() % 11; // от 0 до 10
		cout << m[i] << "\t";
	}

	cout << endl;

	// меняем и выводим
	for (i = 0; i < n / 2; i++)
	{
		vedro = m[i];
		m[i] = m[n - 1 - i];
		m[n - 1 - i] = vedro;
	}

	for (i = 0; i < n; i++)
		cout << m[i] << "\t";


	return 0;
}


