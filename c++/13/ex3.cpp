#include <iostream>
#include <cstdlib>
using namespace std;

// структура

int main ()
{
	struct meal
	{
		string base;
		string salad[4][2];
		int ccal;
		};
		
	struct meal diner;
	
	setlocale (LC_ALL, "RUS");
	cout << "Что будете кушать?" << endl;
	cout << "Основное блюдо: ";
	cin >> diner.base;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 2; j += 2)
		{
			cout << "Игредиент №" << i + 1 << ": ";
			cin >> diner.salad[i][j];
			cout << "Количество игредиента №" << i + 1 << ": ";
			cin >> diner.salad[i][j + 1];
			}
		}	
	/*помидоры 2
	 *огурцы   3 
	 */ 
	cout << "Ожидаемая энергетическая ценность: ";
	cin >> diner.ccal;

	return 0;
}
