#include <iostream>
#include <cstdlib>
#include <ctime>

int main ()
{
	srand(time(NULL));

	const int n = 10;
	int a[10], b;

	for(int i = 0; i < n; i++)
	{
		a[i] = rand() % 10;
		std::cout << a[i] << "\t";
	}

	std::cout << std::endl;

	for(int i = 0; i < n - 1; i++)
	{
		for(int j = 0; j < n - i - 1; j++)
		{
			if(a[j] > a[j + 1])
			{
				b = a[j];
				a[j] = a[j + 1];
				a[j + 1] = b;
			}
		}
	}

	for(int i = 0; i < n; i++)
	{
		std::cout << a[i] << "\t";
	}
	
	return 0;
}


