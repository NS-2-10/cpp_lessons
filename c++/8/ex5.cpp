#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	int mas[5];

	for (int i = 0; i < 5; i++)
	{
		cout << "Елемент #" << i << ": ";
		cin >> mas[i];
	}

	int max = mas[0];

	for (int i = 5 - 1; i >= 0; i--) // от хвоста к началу
	{
		if (max < mas[i])
			max = mas[i];
	}

	cout << "Максимальное значение: " << max << endl;

	return 0;
}