#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// *** вокзальная касса ***
// количество поездов заранее не известно, получаем рандомно
// значение вагона - количество пассажиров. максимальное количество - 40 человек
// стоимость биллетов 600 грн

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));

	const int ticket = 600, normal = 20000;
	int** station = NULL;
	int trains, cabs, i, j, money = 0;

	trains = rand() % 10 + 1; // 1..10
	cabs = rand() % 20 + 1;

	station = new int* [trains];
	for (i = 0; i < trains; i++)
	{
		station[i] = new int[cabs];
	}

	for (i = 0; i < trains; i++)
	{
		for (j = 0; j < cabs; j++)
		{
			station[i][j] = rand() % 41; //0..40
			cout << station[i][j] << "\t";

			money += station[i][j] * ticket;
		}
		cout << endl;
	}

	cout << "money = " << money << endl;
	if (money >= normal)
		cout << "great result!" << endl;
	else
		cout << "bad result!" << endl;

	for (i = 0; i < trains; i++)
		delete[] station[i];

	delete station;

	return 0;
}