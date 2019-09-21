#include <iostream>
using namespace std;

// меняли местами поезда самый первый и тот, где максимальный элемент

int main ()
{
	const int n = 3, m = 4;
	int a[n][m], b, i, j, num, max;

	cout << "Введите матрицу:" << endl;
	for (i = 0; i < n; i++) // по платформам
	{
  	  for (j = 0; j < m; j++) // по вагонам
   	  {
   	  	cout << "a[" << i << "][" << j << "] = ";
        cin >> a[i][j];
      }
    }
	cout << endl;

	// выводим матрицу
	for (i = 0; i < n; i++)
	{
	    for (j = 0; j < m; j++)
	    {
    	    cout << a[i][j] << "\t";
    	}
    	cout << endl;
	}
	cout << endl;

	// ищем номер платформы через максимум
	max = a[0][0];
	for (i = 0; i < n; i++)
	{
    	for (j = 0; j < m; j++)
    	{
        	if (max <= a[i][j])
        	{
        		max = a[i][j];
            	num = i;
        	}
        }
    }

    // пересадка
    for (j = 0; j < m; j++)
    {
      	b = a[0][j];
       	a[0][j] = a[num][j];
       	a[num][j] = b;
   	}

   	// вывод того, что изменилось
	for (i = 0; i < n; i++)
	{
    	for (j = 0; j < m; j++)
    	{
        	cout << a[i][j] << "\t";
        }
    	cout << endl;
	}
	
	return 0;
}