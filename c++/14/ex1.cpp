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

// 3 функция, которая вызывает 1 и 2
int primer(int a, int b)
{
    int c = add(a, b);
    int d = mult(a, b);
    return c - d; // a + b - (a * b) 
}

//пустая 4 функция
void add2(float a, float b)
{
    cout << "Другое сложение: " << a + b << endl;
}

// главная функция, точка запуска, которая вызывает все остальные функции
int main ()
{
   cout << "Сложение: " << add(3, 4) << endl; // 3 + 4
   cout << "Умножение: " << mult(5, 6) << endl;
   cout << "Пример: " << primer(9, 8) << endl;
   add2(2.5, 3);
	
   return 0;
}