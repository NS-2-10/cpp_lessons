﻿#include <iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	
	const int n = 10;
	int mas[n] = { 9, -5, 0, 3, 0, -4, 2, 1, 0, 3 };
	// сюда кидаем количество
	int count = 0;
	//здесь будет наша сумма, float потому что будем искать среднее арифметическое
	float sum = 0;
	//а здесь среднее арифметическое, float потому что будем делить
	float avr = 0;
	// и наше произведение элементов с нечетными индексами
	int pr = 1;
	int i; //без счетчика никуда

	for (i = 0; i < n; i++)
	{
		//выводим массив
		cout << mas[i] << "\t";

		//ищем количество положительных чисел после 0
		if (mas[i + 1] > 0 && mas[i] == 0)
			++count;

		//ищем нашу сумму
		sum += mas[i]; // sum = sum + mas[i];

		//ищем произведение
		if (i % 2 != 0) // if (i % 2 == 1)
			pr *= mas[i];
	}
	//ищем среднее арифметическое
	avr = sum / n;

	cout << endl << endl << "Сумма элементов: " << sum << endl;
	cout << "Среднее арифметическое элементов: " << avr << endl;
	cout << "Произведение элементов с нечетными индексами: " << pr << endl;
	cout << "Количество положительных элементов, которым предшествуют нули: " << count << endl;

	return 0;
}