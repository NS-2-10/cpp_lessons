#include <iostream>
using namespace std;

int main ()
{
	const int st = 4;
	int city[st][st], i, j;

	for (i = 0; i < st; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			city[i][j] = (i + 1) * 10 + j + 1;
			cout << city[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}

