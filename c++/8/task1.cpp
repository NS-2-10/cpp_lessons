#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	char color;
	int step, i;

	cout << "Сколько ступенек: "; 
	cin >> step;

	for (i = 1; i <= step; i++) // for(i = 0; i < step; i++)
	{
		// вводим цвет
		cout << "Какой цвет (b|w): ";
		cin >> color;
		// проверяем цвет
		for (;;)
		{
			if (color != 'b' && color != 'w')
			{
				cout << "Просили же ввести нормальный цвет (b|w): ";
				cin >> color;
			}
			else
				break;
		}
		// смотрим на какой мы ступеньке
		if (color == 'b')
		{
			cout << "Не могу пройти это препятствие, буду прыгать!" << endl;
			continue;
		}

		cout << "Сделан шаг!" << endl;
	}

	return 0;
}
