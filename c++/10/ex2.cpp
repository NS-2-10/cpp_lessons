#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

// парк с динозаврами
// хищники * и травоядные &, если не знаем ?
// остальное +
// разграничить их по вертикали, неизстных на верхнюю границу

int main ()
{
	setlocale (LC_ALL, "rus");
	srand (time (NULL));

	const int l = 31, w = 15;
	char park[w][l]; 
	int i, j, k, n_p = 0, n_v = 0, n_i = 0, num = 3, step = 10;

	// горизонтальная граница
	for (j = 0; j < l; j++)
		park[1][j] = '-';

	// вертикальная граница
	for (i = 0; i < w; i++)
		park[i + 1][l / 2] = '|';

	// заполняем пустоту в парке
	for (i = 0; i < w; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (park[i][j] != '-' && park[i][j] != '|')
				park[i][j] = '+';
		}
	}

	// запустим инкогнита
	n_i = rand() % num + 1; // от 1 до 3
	int j_n_i = 0;

	// инкогнита ходит
	for (int s = 0; s < step; s++)
	{
		// стираем
		system ("cls"); // system ("clear");

		// появление динозавров
		for (k = 0; k < n_i; k++)
		{
			j_n_i = rand() % l;
			park[0][j_n_i] = '?';
		}

		// прорисовываем
		for (i = 0; i < w; i++)
		{
			for (j = 0; j < l; j++)
			{
				cout << park[i][j] << " ";
			}
			cout << endl;
		}

		// между перемещениями
		for (j = 0; j < l; j++)
			park[0][j] = '+';

		for (i = 0; i < w; i++)
		{
			for (j = 0; j < l; j++)
			{
				if (park[i][j] != '-' && park[i][j] != '|')
					park[i][j] = '+';
			}
		}
	}

	return 0;
}
