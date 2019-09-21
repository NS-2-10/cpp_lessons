#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "RUS");

	char color = ' ';
	const int step = 3;
	int i;

	cout << "цвет принимает значения b/w" << endl;

	cout << "*** для break ***" << endl;
	for (i = 0; i < step; i++) 
	{
		cout << "какого цвета ступенька?" << endl << "цвет: ";
		cin >> color;

		if (color == 'b')
		{
			cout << "уходим" << endl;
			break;
		}
		else 
			if (color == 'w')
				cout << "делаем шаг" << endl;
			else
				for (;;)
				{
					cout << "так не бывает!" << endl;
					cout << "какого все таки цвета ступенька?" << endl << "цвет: ";
					cin >> color;
					if (color == 'b' || color == 'w')
						break;
				}
	}
	if (i == step)
		cout << "*** break победил ***" << endl;
	else
		cout << "*** break проиграл ***" << endl;


	cout << "*** для continue ***" << endl;
	for (i = 0; i < step; i++) 
	{
		cout << "какого цвета ступенька?" << endl << "цвет: ";
		cin >> color;

		if (color == 'b')
		{
			cout << "прыгаем" << endl;
			continue;
		}
		else 
			if (color == 'w')
				cout << "делаем шаг" << endl;
			else
				for (;;)
				{
					cout << "так не бывает!" << endl;
					cout << "какого все таки цвета ступенька?" << endl << "цвет: ";
					cin >> color;
					if (color == 'b' || color == 'w')
						break;
				}
	}
	if (i == step)
		cout << "*** continue победил ***" << endl;
	else
		cout << "*** continue проиграл ***" << endl; // никогда не случится


	return 0;
}
