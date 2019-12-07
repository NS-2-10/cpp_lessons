#include <iostream>
#include <cstdlib>
using namespace std;

/*
#1					#2					
0					0	0	0	0		
0	0				0	0	0				
0	0	0			0	0					
0	0	0	0		0					
*/

int main()
{

	const int n = 6;
	int grisha[n][n], i, j;

	//******************************************************

	cout << "#2" << endl;
	// in
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n - 1 - i; j++)
		{
			grisha[i][j] = 2;
		}
	}
	// out
	for (i = 0; i < n; i++)
	{
		for (j = 0; j <= n - 1 - i; j++)
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
