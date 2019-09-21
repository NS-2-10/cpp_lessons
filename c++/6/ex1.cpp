#include <iostream>
using namespace std;
//std::cin >> a;
//void main() - без return 0;

int main ()
{
	setlocale(LC_ALL, "RUS");

	float a, b;

	cout << "a = ";
	cin >> a;

	cout << "b = ";
	cin >> b;

	if (a > b)
		cout << "a > b" << endl;
	else 
		if (b > a)
			cout << "b > a" << endl;
		else
			cout << "a == b" << endl;

	return 0;
}

