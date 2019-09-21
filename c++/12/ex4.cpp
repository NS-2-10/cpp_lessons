#include <iostream>
#include <string.h>
using namespace std;

// ввести 3 строки
// склеить 1 со 2
// сравнить 2 с 3
// вычесть из длины 1 сумму длин 2 и 3

int main ()
{
	const int l = 100;
	char cat[l], dog[l], parrot[l];

	cout << "cat: ";
	cin >> cat;

	cout << "dog: ";
	cin >> dog;

	cout << "parrot: ";
	cin >> parrot;

	cout << "cat&dog: " << strcat(cat, dog) << endl;

	if (strcmp (dog, parrot) < 0)
	{
		cout << "dog or parrot: " << dog << endl;
	}
	else
	{
		cout << "dog or parrot: " << parrot << endl;
	}

	int say = strlen (cat) - strlen (dog) - strlen (parrot);
	cout << "say: " << say;

	return 0;
}

