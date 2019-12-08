#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	// time(0) -> srand() -> rand()
	srand(time(0));

	int* all = NULL;
	int i, g;

	cout << "g = ";
	cin >> g;

	all = new int[g]; // создали

	cout << "all: " << endl;
	for (i = 0; i < g; i++)
	{
		all[i] = rand() % 100 + 1; // 1..100
		cout << all[i] << "\t";
	}

	cout << endl << "== 1: " << endl;
	for (i = 0; i < g; i++)
	{
		if (all[i] % 2 == 1)
			cout << all[i] << "\t";
	}

	cout << endl << "== 0: " << endl;
	for (i = 0; i < g; i++)
	{
		if (all[i] % 2 == 0)
			cout << all[i] << "\t";
	}

	cout << endl;

	delete all;
	return 0;
}

