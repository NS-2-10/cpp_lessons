#include <iostream>
using namespace std;

// как считать свой средний балл  

int main()
{
	setlocale(LC_ALL, "RUS");

	const int lessons = 5;
	int rate[lessons];
	float sum = 0, avr = 0;

	for (int i = 0; i < lessons; i++)
	{
		for (; ; )
		{
			cout << "введите оценку №" << i + 1 << ": ";
			cin >> rate[i];
			if (rate[i] >= 2 && rate[i] <=12) // !
				break;
			else
				cout << "проверьте введенное значение!" << endl;
		}
		sum += rate[i];
	}

	avr = sum / lessons;
	int round = sum / lessons;

	if (avr - round < 0.5)
		avr = round;
	else
		avr = round + 1;

	cout << endl << "средний балл табеля: " << avr << endl;

	return 0;
}

