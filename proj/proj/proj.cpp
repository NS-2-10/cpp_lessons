#include <iostream>
#include <cstdlib>
using namespace std;

// структура

int main()
{
	struct universe {
		string planet[8];
		string sun;
		int beings;
	};

	universe my;

	cout << "name of sun: ";
	cin >> my.sun;

	cout << "count of beings: ";
	cin >> my.beings;

	for (int i = 0; i < 8; i++)
	{
		cout << "name of planet#" << i + 1 << ": ";
		cin >> my.planet[i];
	}

	return 0;
}