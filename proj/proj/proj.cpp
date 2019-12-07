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

int main()
{

	const int n = 6;
	int grisha[n][n], i, j;

	//******************************************************

	cout << "#4" << endl;
	// in
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			grisha[i][j] = 4;
		}
	}
	// out
	for (i = 0; i < n; i++)
	{
		for (j = i; j < n; j++)
		{
			cout << grisha[i][j] << " ";
		}
		cout << endl;
	}

	//******************************************************

	cout << "#3" << endl;
	// in
	for (i = n - 1; i >= 0; i--)
	{
		for (j = n - 1; j >= i; j--)
		{
			grisha[i][j] = 3;
		}
	}
	// out
	for (i = n - 1; i >= 0; i--)
	{
		for (j = n - 1; j >= i; j--)
		{
			cout << grisha[i][j] << " ";
		}
		cout << endl;
	}

	//******************************************************

	cout << "#2" << endl;
	// in
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >=i; j--)
		{
			grisha[i][j] = 2;
		}
	}
	// out
	for (i = 0; i < n; i++)
	{
		for (j = n - 1; j >= i; j--)
		{
			cout << grisha[i][j] << " ";
		}
		cout << endl;
	}

	//******************************************************

	cout << "#1" << endl;
	// in
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			grisha[i][j] = 1;
		}
	}
	// out
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= i; j++)
		{
			cout << grisha[i][j] << " ";
		}
		cout << endl;
	}

	//******************************************************

	return 0;
}
