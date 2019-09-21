#include <iostream>
#include <string.h>
using namespace std;

// обнуление 1й строки
// склеивание 1й строки со 2й и 3й
// сумма длин всех строк

int main ()
{
	const int l = 1000;
	char smile_food[l], glovo[l], vilkipalki[l];

	strcpy (smile_food, " ");

	cout << "adr glovo: ";
	cin >> glovo;

	cout << "adr vilkipalki: ";
	cin >> vilkipalki;

	cout << "adr smile_food: " << strcat (smile_food, strcat (glovo, vilkipalki)) << endl;

	int how_far = strlen (smile_food) + strlen (glovo) + strlen (vilkipalki);
	cout << "how far: " << how_far << endl;

	return 0;
}