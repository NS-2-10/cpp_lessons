#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));

	const int vagony = 6;
	int paravozik[vagony];

	// заполнение
	for (int i = 0; i < vagony; i++)
		paravozik[i] = rand() % 10; //0..9
	
	// вывод
	for (int i = 0; i < vagony; i++)
		cout << paravozik[i] << "\t";

	cout << endl;
	return 0;
}