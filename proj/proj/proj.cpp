#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	const int n = 14;
	int minmax[n], i, min, max;

	// заполнили и вывели
	for (i = 0; i < n; i++)
	{
		minmax[i] = rand() % 10; // 0..9
		cout << minmax[i] << "\t";
	}
	cout << endl;

	// нашли
	max = minmax[0];
	min = minmax[0];
	for (i = 0; i < n; i++)
	{
		if(max < minmax[i])
			max = minmax[i];
		
		if (min > minmax[i])
			min = minmax[i];
	}

	cout << "max = " << max << endl;
	cout << "min = " << min << endl;

	return 0;
}

