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

	int r, x, y;

	r = rand() % 16; // 0..15 
	cout << "Радиус опасности: " << r << endl;

	
	cout << "Введите горизонтальную координату: "; 
	cin >> x;

	cout << "Введите вертикальную координату: ";
	cin >> y;

	if (pow(r, 2) >= pow(x, 2) + pow(y, 2))
	{
		cout << "Вы упали на звезду :(" << endl << "Программа прекращает свою работу" << endl;
		return 0;
	}

	if(x < 0 && y > 0) 
		cout << "Вы держите путь к планете Сильвия" << endl;
	
	if(x > 0 && y > 0) 
		cout << "Вы держите путь к планете Урал" << endl;

	if(x > 0 && y < 0)
		cout << "Вы держите путь к планете Китай" << endl;

	if(x < 0 && y < 0)
		cout << "Вы держите путь к планете Раксокорикoфалапаториус" << endl;

	if ((x < 0 && y > 0) || (x < 0 && y < 0))
		cout << "Вы приближаетесь к границе системы, поосторожней там..." << endl;

	return 0;
}


/*
if(0 < x && x < e) // if(0 < x < e) -> error
*/