#include <iostream>
#include <cstdlib>  
#include <ctime>
using namespace std;

// заполнить массив 
// сколько нечетных элементов идет после четных (анализировать значение)
// сумму элементов > 15 или < 12 
// произведение всех

int main ()
{
	setlocale (LC_ALL, "RUS");
	srand (time (NULL));

	const int v = 30;
	int w[v], i, c = 0, s = 0, m = 1;

	// сумму элементов > 15 или < 12, произведение всех
	for (i = 0; i < v; i++)
	{
		w[i] = rand () % 21; // 0...20

		m *= w[i];

		if (w[i] > 15 || w[i] < 12)
		{
			s += w[i];
		}

		cout << w[i] << "\t";
	}

	// сколько нечетных элементов идет после четных
	for (i = 0; i < v; i++)
	{
		if (w[i] % 2 == 0 && w[i + 1] % 2 == 1)
		{
			++c;
		}
	}

	cout << endl << "количство: " << c << endl;
	cout << "сумма: " << s << endl;
	cout << "умножение: " << m << endl;

	return 0;
}

