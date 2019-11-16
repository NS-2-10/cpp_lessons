#include <iostream>
using namespace std;

// меняем местами элементы от конца к середине массива

int main()
{
	const int n = 5;
	int mas[n] = { 8, 3, 0, 15, 7 }; // 7	15	0	3	8 
	int vedro;

	for (int i = 0; i < n / 2; i++)
	{
		vedro = mas[i];
		mas[i] = mas[n - 1 - i];
		mas[n - 1 - i] = vedro;
	}

	for(int i = 0; i < n; i++)
		cout << mas[i] << "\t";

	cout << endl;
	return 0;
}


