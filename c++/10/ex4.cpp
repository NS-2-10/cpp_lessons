#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// пример для домашки
// если меньше 2 - то посадить 5; больше 6 - посадить 5

int main ()
{
	setlocale (LC_ALL, "rus");

	const int p = 2, v = 8, min = 2, max = 6, cap = 8, norm = 5;
	int st[p][v], i, j;

	// заполнили, вывели, сравнили, поменяли
	srand (time(NULL));
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < v; j++)
		{
			st[i][j] = rand() % cap + 1;
			cout << st[i][j] << " ";

			if (st[i][j] <= min || st[i][j] >= max)
				st[i][j] = norm;
		}
		cout << endl;
	}

	cout << "**************" << endl;
	for (i = 0; i < p; i++)
	{
		for (j = 0; j < v; j++)
			cout << st[i][j] << " ";
		cout << endl;
	}

	return 0;
}

