#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	const int side = 6;
	int i, j;
	char secret[side][side] = { {'п','*','#','?','!',' '},
								{' ','р','о','.','ж',','},
								{'ж','г','и','и','з','д'},
								{'а','б','р','в','в','г'},
								{'с','о','р','т','е','о'},
								{'к','в','л','м','п','т'} };

	cout << "наш секрет: " << endl;
	for (i = 0; i < side; i++)
	{
		for (j = 0; j < side; j++)
		{
			cout << secret[i][j];
		}
		cout << endl;
	}
	cout << endl;

	cout << "наше послание: " << endl;
	for (i = 0; i < side; i++)
	{
		cout << secret[i][i];
	}
	for (i = 0; i < side; i++)
	{
		cout << secret[i][side - 1 - i];
	}

	cout << endl;
	return 0;
}

