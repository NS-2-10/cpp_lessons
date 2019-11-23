#include <iostream>
using namespace std;

// попарно меняем элементы местами

int main()
{
	setlocale(LC_ALL, "RUS");

	const int n = 8;
	int i, vedro;
	char derevo[n];

	// заполнили
	for (i = 0; i < n; i++)
	{
		cout << "Какого цвета дерево #" << i << " (z|j): ";
		cin >> derevo[i];
	}

	// вывели
	for (i = 0; i < n; i++)
	{
		cout << derevo[i] << "\t";
	}
	cout << endl;

	// меняем
	for (i = 0; i < n; i += 2)
	{
		vedro = derevo[i];
		derevo[i] = derevo[i + 1];
		derevo[i + 1] = vedro;
	}

	// вывели
	for (i = 0; i < n; i++)
	{
		cout << derevo[i] << "\t";
	}
	cout << endl;

	return 0;
}

// c = a;
// a = b;
// b = c;
