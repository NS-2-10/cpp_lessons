#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// как создавать двумерные массивы
// чет * 2, нечет + 2

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	// создали массив
	const int n = 6, m = 3;
	int town[n][m], i, j;
	
	// заполнили и вывели
	for (i = 0; i < n; i++) // для улиц
	{
		for (j = 0; j < m; j++) // для домов
		{
			town[i][j] = rand() % 5 + 1; // 1..5
			cout << town[i][j] << "\t";
		}
		cout << endl; // таблица
	}

	cout << endl << endl; // отступ

	// поменяли значения
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (town[i][j] % 2 == 0) // если четное
				town[i][j] *= 2;
			else
				town[i][j] += 2;

			cout << town[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}