#include <iostream>
#include <cmath>
using namespace std;

// найти минимум и строку, где он есть, поменять с последним

int main()
{
	setlocale(LC_ALL, "rus");

	const int n = 4;
	float c[n][n], vedro = 0, min;
	int i, j, num;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			c[i][j] = pow(i, j);
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}
	
	min = c[0][0];
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (min > c[i][j])
			{
				min = c[i][j];
				num = i;
			}
		}
	}

	if (num == n - 1)
	{
		cout << "no changes" << endl;
		return 0;
	}

	for (j = 0; j < n; j++)
	{
		vedro = c[num][j];
		c[num][j] = c[n - 1][j];
		c[n - 1][j] = vedro;
	}

	cout << endl << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << c[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
