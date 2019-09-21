#include <iostream>
#include <cstdlib>
using namespace std;

/*
#1					#2					#3					#4
0					0	0	0	0					0		0	0	0	0
0	0				0	0	0					0	0			0	0	0
0	0	0			0	0					0	0	0				0	0
0	0	0	0		0					0	0	0	0					0
*/

int main ()
{
	const int n = 4;
	char c[n][n], i, j;

	cout << "\ntask #1" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			c[i][j] = 'x';
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\ntask #2" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n - 1 - i; j++)
		{
			c[i][j] = 'z';
			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\ntask #3" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j >= n - 1 - i)
				c[i][j] = 'y';
			else 
				c[i][j] = ' ';

			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\ntask #4" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (j >= i)
				c[i][j] = 'h';
			else 
				c[i][j] = ' ';

			cout << c[i][j] << " ";
		}
		cout << endl;
	}

	return 0;
}
