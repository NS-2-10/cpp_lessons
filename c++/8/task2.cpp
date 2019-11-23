#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cmath>
using namespace std;

/*
ест 2000 гр - норма, x2
как кормит - rand()

недокармливает? перекармливает? порядок?
*/

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(0));

	const int total = 2000, luck = 200, days = 7, count = 2;
	float leo[days], breakfast, dinner, yes_no;

	for (int i = 0; i < days; i++)
	{
		breakfast = rand() % (total + 1); // 0..2000
		dinner = rand() % (total + 1); // 0..2000
		yes_no = rand() % 2; // 0..1

		if (yes_no == 1)
			leo[i] = breakfast + dinner + luck;
		else
			leo[i] = breakfast + dinner;

		cout << "Сегодня леопард съел " << leo[i] << " гр." << endl;
		if (fabs(leo[i] - total) > luck)
			cout << "Вы плохо ухаживаете за леопардом!" << endl;
		else
			cout << "Вы хорошо ухаживаете за леопардом!" << endl;
		cout << "***" << endl;
	}

	return 0;
}