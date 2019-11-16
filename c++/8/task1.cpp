#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));

	const int all = 5;
	int circle, rain = 0;

	// human
	cout << "HUMAN" << endl;
	for (circle = 1; circle <= all; circle++)
	{
		cout << "circle #" << circle << endl;
		// is it rain?
		rain = rand() % 2; // 1 = rain | 0 = no rain
		if (rain == 1)
		{
			cout << "go to home :3" << endl;
			break;
		}
		else
		{
			cout << "circle #" << circle << " is compleat!" << endl << "*" << endl;
		}
	}

	// warior
	cout << "WARIOR" << endl;
	for (circle = 1; circle <= all; circle++)
	{
		cout << "circle #" << circle << endl;
		// is it rain?
		rain = rand() % 2; // 1 = rain | 0 = no rain
		if (rain == 1)
		{
			cout << "go to home, but to be continue :3" << endl;
			continue;
		}
		else
		{
			cout << "circle #" << circle << " is compleat!" << endl << "*" << endl;
		}
	}

	// immortal
	cout << "IMMORTAL" << endl;
	for (circle = 1; circle <= all; circle++)
	{
		cout << "circle #" << circle << endl;
		cout << "circle #" << circle << " is compleat!" << endl << "*" << endl;
	}

	return 0;
}
