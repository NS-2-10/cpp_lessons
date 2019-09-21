#include <iostream>
using namespace std;

int main ()
{
	const int c = 5;
	                //0             4
	int cab[c][c] = {{1, 6, 11, 16, 21},
					 {2, 7, 12, 17, 22},
					 {3, 8, 13, 18, 23},
					 {4, 9, 14, 19, 24},
					 {5, 10, 15, 20, 25}};

	int i, j, buf = 0;

	for (i = 0; i < c; i++)
	{
		buf = cab[i][0];
		cab[i][0] = cab[c - 1 - i][c - 1];
		cab[c - 1 - i][c - 1] = buf;
	}

	for (i = 0; i < c; i++)
	{
		for (j = 0; j < c; j++)
		{
			cout << cab[i][j] << "\t";
		}
		cout << endl;
	}
	
	return 0;
}