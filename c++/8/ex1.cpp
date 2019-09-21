#include <iostream>
using namespace std;

int main ()
{
	setlocale(LC_ALL, "RUS");
	int i;
    int x;
      
    // continue - выводим нечет
    for (i = 1; i < 6; i++) // ++ - инкремент
    {
        if (i % 2 == 0)
            continue;
        cout << i << "\t"; // 1   3   5
    }

    cout << endl;

    // break
    for( ; ; ) // нет конца
    {
        cout << "Введите число: ";
        cin >> x;
        if (x == 0) // ввели 0
            break;
    }
 
    return 0;
}