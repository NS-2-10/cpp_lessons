#include <iostream>
#include <cstdlib>
using namespace std;

// структура

int main()
{
	struct football_stadium {
		string first_game;
		int capacity;
		string teams[2];
	};

	football_stadium campnow;

	cout << "first game: ";
	cin >> campnow.first_game;

	cout << "capacity: ";
	cin >> campnow.capacity;

	for (int i = 0; i < 2; i++)
	{
		cout << "team#" << i + 1 << ": ";
		cin >> campnow.teams[i];
	}

	return 0;
}
