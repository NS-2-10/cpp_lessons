#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	const int n = 5;
	int a[n], b;

	for (int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		cout << a[i] << "\t";
	}

	cout << endl;

	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}

	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}

	return 0;
}


