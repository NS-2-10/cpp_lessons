#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// [][][][][][][][][][] элементы массива
// 0 1 2 3 4 5 6 7 8 9  номера элементов массива
// a b c d e f g h j k  значение элементов массива

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	int mas1[10];
	cout << "Массив, который мы заполняли случайными числами:" << endl;
	for (int i = 0; i < 10; i++)
	{
		mas1[i] = rand() % 5; // 0..4  
		cout << mas1[i] << "\t";
	}

	int mas2[10] = { 9, 8, 5, 6, 4, 3, 2, 1, 7, 0 };
	cout << "\n" << "Массив, который мы заполнили из кода:" << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << mas2[i] << "\t";
	}
	cout << endl;


	int mas3[3];
	for (int i = 0; i < 3; i++)
	{
		cout << "Введите элемент #" << i << ": ";
		cin >> mas3[i];
	}
	cout << "Что у нас получилось:" << endl;
	for (int i = 0; i < 3; i++)
	{
		cout << mas3[i] << "\t";
	}
	cout << endl;



	int mas4[12];
	for (int i = 0; i < 12; i++)
		mas4[i] = i * 2;
	cout << "Что у нас получилось:" << endl;
	for (int i = 0; i < 12; i++)
		cout << mas4[i] << "\t";

	cout << endl;

	return 0;
}

