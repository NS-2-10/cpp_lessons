#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int n;
	n = rand() % 10 + 6; // 6..15
	cout << "n = " << n << endl;

	int* maxim = NULL; // создали указатель
	maxim = new int[n]; // выделили память
	for (int i = 0; i < n; i++)
	{
		maxim[i] = rand() % 11 + 20; // 20..30
		cout << maxim[i] << " ";
	}

	cout << endl << "четные элементы: ";
	for (int i = 0; i < n; i++)
	{
		if (maxim[i] % 2 == 0)
			cout << maxim[i] << " ";
	}

	cout << endl << "нечетные элементы: ";
	for (int i = 0; i < n; i++)
	{
		if (maxim[i] % 2 == 1)
			cout << maxim[i] << " ";
	}

	cout << endl;
	delete maxim;
	return 0;
}

