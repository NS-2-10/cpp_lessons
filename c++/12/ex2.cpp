#include <iostream>
using namespace std;

// как считать свой средний балл  

int main()
{
	setlocale(LC_ALL, "RUS");

	const int lessons = 5;
	int rate[lessons];
	float avr = 0, sum = 0; // могут быть дробные значение

	for (int i = 0; i < lessons; i++)
	{
		for (; ; ) // бесконечный цикл
		{
			cout << "rate#" << i + 1 << ": ";
			cin >> rate[i];

			// проверяем, чтобы введенное значение было в интервале 1..12
			if (rate[i] >= 1 && rate[i] <= 12)
				break;
			else
				cout << "error!" << endl;
		}
		sum += rate[i]; // находим сумму оценок
	}
	
	avr = sum / lessons;
	int round = sum / lessons;

	if (avr - round < 0.5)
		avr = round;
	else
		avr = round + 1;

	cout << "avr rate = " << avr << endl;

	return 0;
}

