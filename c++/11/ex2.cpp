#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// min и max в динамическом

int main ()
{
	setlocale (LC_ALL, "RUS");
	srand (time (NULL));

	int *a = NULL;

	int v = rand () % 12 + 1; // 1...12
	cout << "количество элементов: " << v << endl;

	a = new int[v]; // создали массив

	for (int i = 0; i < v; i++)
	{
		a[i] = rand () % 10; // 0...9
		cout << a[i] << " ";
	}

	int mx = a[0], mn = a[0];
	for (int i = 0; i < v; i++)
	{
		if (mx < a[i])
			mx = a[i];

		if (mn > a[i])
			mn = a[i];
	}

	cout << endl << "минимум: " << mn << endl << "максимум: " << mx << endl;

	delete a;

	return 0;
}

