#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	int otvet;
	cout << "Введите целое число от 1 до 3: ";
	cin >> otvet;

	/*
		switch (переменная, которую анализируем)
		{
			case значение1:{что-то делаем;	break;}

			case значение2:{что-то делаем;	break;}

			default:{делаем если не случился ни один case;	break;}
		}
	*/

	switch (otvet)
	{
	case 1: 
	{
		cout << "Вы ввели 1!" << endl;
		break;
	}
	case 2:
	{
		cout << "Вы ввели 2!" << endl;
		break;
	}
	case 3:
	{
		cout << "Вы ввели 3!" << endl;
		break;
	}
	default:
	{
		cout << "Вы ввели что-то не то!" << endl;
		break;
	}
	}

	return 0;
}
