#include <iostream>
using namespace std;

// 1 функция
int add(int a, int b)
{
	return a + b;
}

// 2 функция
int mult(int a, int b)
{
	return a * b;
}

//пустая функция
void add2(float a, float b)
{
	cout << "Другое сложение: " << a + b << endl;
}

// главная функция, точка запуска, которая вызывает все остальные функции
int main()
{
	setlocale(LC_ALL, "rus");
	cout << "Сложение: " << add(3, 4) << endl; // 3 + 4
	cout << "Умножение: " << mult(5, 6) << endl;
	add2(2.5, 3);

	return 0;
}