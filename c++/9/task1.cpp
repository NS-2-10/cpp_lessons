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

	const int n = 3, m = 6;
	int arr[n][m], i, j;

	for(i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			arr[i][j] = rand() % 100 + 1; // 1..100
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl << endl;

	for(i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			if (arr[i][j] % 2 == 0)
				arr[i][j] *= 2;
			else
				arr[i][j] += 2;

			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}

	cout << endl << endl;
	return 0;
}