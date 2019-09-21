#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main ()
{
	int i;
	int n = 0;
	int *mas = NULL;

	srand (time (NULL));
	n = rand () % 10 + 1; // 1...10
	mas = new int[n];

	for (i = 0; i < n; i++)
	{
		mas[i] = rand () % 10; //0...9
		cout << mas[i] << "\t"; 
	}

	delete mas;

	return 0;
}

/*
 дз

 0 9 8 7 6 - из динамического в главную диагональ двумерного

 0 0 0 0 0
 0 9 0 0 0
 0 0 8 0 0
 0 0 0 7 0
 0 0 0 0 6
*/
