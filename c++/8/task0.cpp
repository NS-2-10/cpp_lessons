#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

int main ()
{
	setlocale (LC_ALL, "RUS");
	srand (time (NULL));

	const int pack = 10;
	int creker[pack];

	cout << "*** случайные числа ***" << endl;
	for (int i = 0; i < pack; i++)
	{
		creker[i] = rand () % 51; // 0...50
		cout << creker[i] << " ";
	}

	cout << endl << "*** по правилу ***" << endl; 
	for (int i = 0; i < pack; i++)
	{
		creker[i] = sqrt (pow (i, 2)); // i
		cout << creker[i] << " ";
	}

	return 0;
}