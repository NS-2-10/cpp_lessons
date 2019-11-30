#include <iostream>
using namespace std;

// попарно меняем элементы местами

int main()
{
	setlocale(LC_ALL, "RUS");

	const int n = 12;
	float neptun[n], vedro = 0;
	int i;
	
	//заполнили
	for (i = 0; i < n; i++)
	{
		cout << "neptun[" << i << "] = ";
		cin >> neptun[i];
	}

	// вывод
	for (i = 0; i < n; i++)
		cout << neptun[i] << "\t";
	cout << endl;

	// поменяли
	for (i = 0; i < n; i += 2)
	{
		vedro = neptun[i];
		neptun[i] = neptun[i + 1];
		neptun[i + 1] = vedro;
	}
	
	// вывод
	for (i = 0; i < n; i++)
		cout << neptun[i] << "\t";
	cout << endl;

	return 0;
}

// c = a;
// a = b;
// b = c;
