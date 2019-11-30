#include <iostream>
using namespace std;

// найти минимум и столбец, где он есть, поменять с последним

int main()
{
	setlocale(LC_ALL, "rus");

	const int n = 3;
	int arr[n][n], i, j, vedro, min, num = 0;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << "arr[" << i << "][" << j << "] = ";
			cin >> arr[i][j];
		}
	}

	cout << endl << endl;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	min = arr[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (min > arr[i][j])
			{
				min = arr[i][j];
				num = i;
			}
		}
	}

	if (num == n - 1)
	{
		cout << "Нет изменений" << endl;
		return 0;
	}

	for (j = 0; j < n; j++)
	{
		vedro = arr[num][j];
		arr[num][j] = arr[n - 1][j];
		arr[n - 1][j] = vedro;
	}

	cout << endl;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
