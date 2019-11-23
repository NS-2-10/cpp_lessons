#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");

	const int n = 5;
	int mas[n], i, min, max;

	for (i = 0; i < n; i++)
	{
		mas[i] = rand() % 15 + 1; // 1..15
		cout << mas[i] << "\t";
	}
	cout << endl;

	min = mas[0];
	max = max[0];

	for (i = 0; i < n; i++)
	{
		if (max < mas[i])
			max = mas[i];

		if (min > mas[i])
			min = mas[i];
	}

	cout << "max = " << max;
	cout << "min = " << min;

	return 0;
}

