#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// пример для дз

int main ()
{
	setlocale (LC_ALL, "rus");

	const int st = 5, h = 3, minimum = 3200;
	float city[st][h], bag = 0;

	srand(time(NULL));
	for (int i = 0; i < st; i++)
	{
		for (int j = 0; j < h; j++)
		{
			// смотрим на уровень доходов
			city[i][j] = rand() % (29 * minimum) + minimum;
			cout << city[i][j] << "\t";

			// робингудим
			if (city[i][j] >= 20 * minimum)
			{
				city[i][j] -= 10 * minimum;
				bag += 10 * minimum;
			}
			if (city[i][j] <= 15 * minimum)
			{
				city[i][j] += 3 * minimum;
				bag -= 3 * minimum;
			}
		}
		cout << endl;
	}

	// изменили город к лучшему
	for (int i = 0; i < st; i++)
	{
		for (int j = 0; j < h; j++)
		{
			cout << city[i][j] << "\t";
		}
		cout << endl;
	}

	cout << "в нашем мешке: " << bag << endl;
		
	return 0;
}