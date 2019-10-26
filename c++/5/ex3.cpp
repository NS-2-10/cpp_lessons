﻿#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");

	/* объявляем переменные целого типа, где будут храниться возраст (years)
	 * и количество букв в имени (letters) */
	int years, letters;

	/* объявляем переменную действительного типа и обнуляем, в ней мы будем хранить значение, 
	 * которое будет рассчитываться по условию */
	float result;

	// вводим возраст
	cout << "years = ";
	cin >> years;

	// вводим буквы
	cout << "letters = ";
	cin >> letters;

	// объявляем условный оператор
	if (letters > 4)
		/* если длина имени больше, чем 4 символа, то результату
		 * присваеваем квадратный корень из возраста */
		result = sqrt(years);
	// прописываем альтернативу
	else
		/* если длина имени меньше или равна 4 символам, то результату
		 * присваеваем значение количества букв в имени, возведенное
		 * в степень возраста */
		result = pow(letters, years);
					
	// выводим результат
	cout << "result = " << result << endl;

	// говорим, что все хорошо
	return 0;
}

// if () ... else ...;
// if () ...;