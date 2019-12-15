#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(0));

	int cube = rand() % 6 + 1; // 1..6
	cout << "Ваш первый ход: " << cube << endl;
	while (cube < 6)
	{
		switch (cube)
		{
			case 1:
			{
				cout << "Вы упали в яму. Игра окончена! :(" << endl;
				return 0;
			}
			case 2:
			{
				cout << "Вам повезло! Механический дракон переносит вас на 2 хода вперед!" << endl;
				cube += 2;
				cout << "Ваш ход: " << cube << endl;
				break;
			}
			case 3:
			{
				cube = rand() % 6 + 1;
				cout << "Ваш ход: " << cube << endl;
				break;
			}
			case 4:
			{
				cout << "Вы встретили сильного противника! Узнаем, сможетели вы его победить?" << endl;
				int win = rand() % 2;
				if (win == 0)
				{
					cube--;
					cout << "Вы не смогли одержать победу :( Возвращаетесь на 1 ход назад" << endl;
				}
				else
				{
					cube++;
					cout << "Вы смогли одержать победу :) Продвигаетесь на 1 ход вперед" << endl;
				}
				break;
			}
			case 5:
			{
				cout << "Ответ решит все: что растет, но нет корня?" << endl
					<< "0 - редька" << endl << "1 - человек" << endl
					<< "Ваш выбор: ";
				int choice;
				cin >> choice;
				if (choice == 0)
				{
					cout << "Вы проиграли! Вас съел сфинкс :(" << endl;
					return 0;
				}
				else
				{
					cout << "Вы пробедили! Сфинкс погиб" << endl;
					cube++;
				}
				break;
			}
		}
	}	

	if (cube == 6)
		cout << "Победа! :)" << endl;

	return 0;
}