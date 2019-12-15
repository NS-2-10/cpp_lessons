#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int eagle(int& cube)
{
	cout << "Тебе повезло! Орел перенес тебя на 2 хода вперед" << endl;
	return cube += 2;
}

int poison(int& cube)
{
	cout << "Ты встретил старого друида. Выпей зелье, но повезет ли тебе?" << endl;
	int luck = rand() % 2;
	if (luck == 0)
	{
		cout << "Не повезло :( Идешь медленнее на 1 ход" << endl;
		cube += rand() % 6;
		if (cube > 6)
			cube = 6;
		return cube;
	}
	else
	{
		cout << "Повезло :) Переходишь на 1 ход вперед" << endl;
		return cube++;
	}
}

void death()
{
	cout << "Ты случайно взорвался :( Конец игры!" << endl;
}

void finish()
{
	cout << "Победа :) Забирай печеньку!" << endl;
}

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int cube = rand() % 6 + 1; //1..6
	cout << "Твой первый ход: " << cube << endl;

	while (cube < 6)
	{
		switch (cube)
		{
			case 1:
			{
				eagle(cube);
				cout << "Твой ход: " << cube << endl;
				break;
			}
			case 2:
			{
				death();
				return 0;
			}
			case 3:
			{
				poison(cube);
				cout << "Твой ход: " << cube << endl;
				break;
			}
			case 4:
			{
				cout << "Ты нашел самолет, но полетит он или взорвется?" << endl;
				int luck = rand() % 2;
				if (luck == 0)
				{
					cout << "Взорвался :( Конец игры!" << endl;
					return 0;
				}
				else
				{
					cout << "Полетел :)" << endl;
					cube += 2;
				}
				cout << "Твой ход: " << cube << endl;
				break;
			}
			case 5:
			{
				cout << "Вражеская пружина откинула тебя на 2 хода назад" << endl;
				cube -= 2;
				cout << "Твой ход: " << cube << endl;
				break;
			}
		}
	}

	if (cube == 6)
		finish();

	return 0;
}