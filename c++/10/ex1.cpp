#include <iostream>
using namespace std;

int main ()
{
	// инициализация массива
	int mas[10] = {1, 9, 8, 7, 5, 1, 1, 3, 2, 6};
	//             0  1  2  3  4  5  6  7  8  9

    for(int i = 0; i < 10; i++)
    {
    	// выводим массив
        cout << mas[i] << "\t";

        // меняем значения
        if(mas[i] == 1)
            mas[i] = 0;
    }

    cout << endl;

    // выводим измененный массив
    for(int i = 0; i < 10; i++)
        cout << mas[i] << "\t";
	cout << endl;

	return 0;
}
