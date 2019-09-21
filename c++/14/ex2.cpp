#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int slow (int cube)
{
	return cube += (rand() % 6 + 1) / 2;
}

int fast (int cube)
{
	return cube = cube + 4;
}

int shark (int cube)
{
	return cube = 1;
}

int fortune (int cube)
{
	int luck = rand() % 3 - 1; // min -1, max 1
	if (luck == 1)
		cube = 7;
	else
		cube = cube + luck;
	return cube;
}

int main ()
{
	setlocale (LC_ALL, "rus");

	int cube = 0;
	srand (time(0));
	cube = rand() % 6 + 1; // min 1, max 6

	cout << "Игра началась!" << endl;

	while (cube < 7)
	{
		switch (cube)
		{
			case 1:
			{
				cout << "На вас напал Злой Волшебник и наложил Заклятие Улитки!" << endl;
				cube = slow (cube);
				break;
			}
			case 2:
			{
				cout << "Вам повезло! Вы встретили Мага и он дал вам Зелье Скорости!" << endl;
				cube = fast (cube);
				break;
			}
			case 3:
			{
				cout << "Акулы из волшебного озера перебросили вас в начало пути!" << endl;
				cube = shark (cube);
				break;
			}
			case 4:
			{	
				cout << "На вас напал злой маг! Он перебросил вас в начало пути." << endl;
				cube = shark (cube);
				break;
			}
			case 5:
			{
				cout << "Вас задержал стражник! Вы останетесь на месте на один ход." << endl;
				cube += 0;
				break;
			}
			case 6:
			{
				cout << "Перед вами Колесо Фортуны! Улыбнется ли вам удача?" << endl;
				cube = fortune (cube);
				break;
			}
		}
	}

	cout << "Вы победили!" << endl;
	cout << "Игра окончена!" << endl;

	return 0;
}