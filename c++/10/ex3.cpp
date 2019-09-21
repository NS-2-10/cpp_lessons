#include <iostream>

#include <cstdlib>
// rand() srand()

#include <ctime>
// time()

using namespace std;

int main ()
{
   	setlocale (LC_ALL, "rus");

   	const int l = 5, w = 10;
   	int fish[l][w];	
   	int i, j;

   	srand (time(NULL));
   	for (i = 0; i < l; i++)
   	{
   		for (j = 0; j < w; j++)
   		{
   			fish[i][j] = rand() % l; // 0 1 2 3 4
   			cout << fish[i][j] << " ";
   		}
   		cout << endl; // скидывает на следующую строчку на экране
   	}

   	// поменяли рыб и посчитали их
   	int n = 0;
   	for (i = 0; i < l; i++)
   	{
   		for (j = 0; j < w; j++)
   		{
   			if (fish[i][j] == 0)
   			{
   				++fish[i][j]; // префиксный инкремент
   				n++; // постфиксный инкремент
   			}
   		}
   	}

   	if (n == 0)
   	{
   		cout << "Не нашли нужных рыб!" << endl;
   		return 0;
   	}

   	for (i = 0; i < l; i++)
   	{
   		for (j = 0; j < w; j++)
   		{
   			cout << fish[i][j] << "\t";
   		}
   		cout << endl;
   	}
	
	return 0;
}