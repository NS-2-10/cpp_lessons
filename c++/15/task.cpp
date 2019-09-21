#include <iostream>
using namespace std;

const int n = 2;
float aver(int*);

int main ()
{
	struct mice{
	char name[100];
	int food[n];
	};

	struct mice m;

	cout << "Введите имя мышки: ";
	cin >> m.name;

	cout << "На выходных мышка съела столько сыра: ";
	for (int i = 0; i < n; i++)
	{
		cin >> m.food[i];
	}

	cout << "В среднем мышка сьела: " << aver(m.food) << endl;

	return 0;
}

float aver(int * f)
{
	float sum = 0;

	for(int i = 0; i < n; i++)
		sum += f[i];

	return sum / n;

}