#include <iostream>
#include <cmath>
using namespace std;

// найти минимум и столбец, где он есть, поменять с последним

int main ()
{
	setlocale(LC_ALL, "rus");

	const int n = 5;
	float m[n][n], minimum, vedro = 0;
	int i, j, num = 0; 

	// заполнение и вывод
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			m[i][j] = pow(i, j);
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}

	minimum = m[0][0];

	//поиск номера столбца с синимальным элементом
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n; i++)
		{
			if (minimum > m[i][j])
			{
				minimum = m[i][j];
				num = j;
			}
		}
	}

	//проверяем есть ли изменения
	if (num == n - 1)
	{
		cout << "нет изменений" << endl;
		return 0;
	}
	
	//меняем столбцы местами
	for (i = 0; i < n; i++)
	{
		vedro = m[i][num];
		m[i][num] = m[i][n - 1];
		m[i][n - 1] = vedro;
	}

	//вывод изменений
	cout << "измененный массив" << endl;
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			cout << m[i][j] << "\t";
		}
		cout << endl;
	}

	return 0;
}
