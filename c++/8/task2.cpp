#include <iostream>
#include <cmath>
using namespace std;

/*
ест 100 гр - норма, x2
как кормит - rand()

недокармливает? перекармливает? порядок?
*/

int main()
{
	setlocale(LC_ALL, "RUS");

	const int norm = 100, days = 3, delta = 20;
	int food_f, food_s, food[days];

	for (int i = 0; i < days; i++)
	{
		cout << "День #" << i + 1 << endl;

		cout << "Сколько кошка съела утром: ";
		cin >> food_f;

		cout << "Сколько кошка съела вечером: ";
		cin >> food_s;

		food[i] = food_f + food_s;
		if (abs(norm - food[i]) <= 20)
			cout << "Вы сегодня правильно покормили кошку :3" << endl;
		else
			cout << "Вы - негодяй, кормите кошку правильно!" << endl;
	}

	return 0;
}