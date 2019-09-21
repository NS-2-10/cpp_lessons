#include <iostream>
using namespace std;

int main ()
{
	// символьный массив - строка
	const int n = 10;
    char a[n]; //'2' '%' 'g'

    int i, j, count, repeat = 0;

    // заполняем строку
    cout << "Введите строку: ";
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (i = 0; i < n; i++)
    {
        count = 0;
        // счет повторений
        for (j = n; j > i; j--)
            if (a[i] == a[j] && i != j)
                count++;
        // сброс, если повторений больше 1
        if (count > 1) 
        	continue;
        // вывод повторяющегося по условию
        if (count != 0) 
        {
            repeat++;
            cout << a[j] << "\t";
        }
    }
    cout << endl;
    if (repeat == 0)
        cout << "Нет повторений" << endl;

	return 0;
}

