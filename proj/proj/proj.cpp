#include <iostream>
using namespace std;

// меняем местами элементы от конца к середине массива

int main()
{
	const int n = 10;
	int cat[n], vedro = 0;

	// заполняем и выводим
	for(int i = 0; i < n; i++)
	{
		cat[i] = i;
		cout << cat[i] << "\t";
	}
	cout << endl;

	//меняем местами и выводим
	for (int i = 0; i < n / 2; i++)
	{
		vedro = cat[i];
		cat[i] = cat[n - 1 - i];
		cat[n - 1 - i] = vedro;
	}

	for (int i = 0; i < n; i++)
		cout << cat[i] << "\t";

	cout << endl;

	return 0;
}


