#include <iostream>
using namespace std;

/*
	   1   0   0   2
	   0   1   2   0
	   0   2   1   0
	   2   0   0   1

	   1 - это главная диагональ
	   i == j

	   2 - это побочная диагональ
	   j == n - i - 1
	   n = 4
*/

int main()
{
	const int n = 3;
	int mas[n][n];

	// заполняем
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << "elem #" << i << "#" << j << ": ";
			cin >> mas[i][j];
		}
	}

	// выводим матрицу
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cout << mas[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl;

	// нашли главную диагональ
	cout << "main diag:" << endl;
	for (int i = 0; i < n; i++)
		cout << mas[i][i] << "\t";

	/*
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
				cout << mas[i][j] << "\t";
		}
	}
	*/

	cout << endl;

	// нашли побочную диагональ
	cout << "not main diag:" << endl;
	for (int i = 0; i < n; i++)
		cout << mas[i][n - 1 - i] << "\t";

	/*
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j == n - 1 - i)
				cout << mas[i][j] << "\t";
		}
	}
	*/

	cout << endl;
	return 0;
}

