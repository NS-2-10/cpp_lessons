#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

// навигационная система

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	float x = 0, y = 0, r = 0;

	r = rand() % 10 + 1; // 1..10
	cout << "Радиус опасности звезды: " << r << endl;

	y = rand() % 201 - 100; // -100..0..100
	cout << "Вертикальная координата: " << y << endl;

	x = rand() % 201 - 100; // -100..0..100
	cout << "Горизонтальная координата: " << x << endl;

	if(pow(r, 2) < pow(x, 2) + pow(y, 2)) 
		cout << "Вы на безопасном расстоянии от звезды" << endl;
	else
	{
		cout << "К сожалению, вы потерпели крушение" << endl;
		return 0;
	}

	if(x > 0 && y > 0)
		cout << "Ваше направление: Меркурий++" << endl;

	if(x < 0 && y > 0)
		cout << "Ваше направление: Венера-+" << endl;

	if(x < 0 && y < 0)
		cout << "Ваше направление: Земля--" << endl;

	if(x > 0 && y < 0)
		cout << "Ваше направление: Нептун+-" << endl;

	if ((x < 0 && y > 0) || (x > 0 && y > 0))
		cout << "Вы приближаетесь к звезде. Уменьшите скорость ракеты." << endl;

	return 0;
}
