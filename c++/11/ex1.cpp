#include <iostream>
#include <cmath>
using namespace std;

/*
-> [n] -> use -> x
-> * -> [] -> n -> [n] -> use -> [x] -> x
*/

int main ()
{
	const int maxNumber = 100;
    const int minNumber = 1;
    int *p = NULL;
    int i, size;

    do 
    {
        cout << "Введите количество элементов от " << minNumber << " до " << maxNumber << ": ";
        cin >> size;
        if ((size <= maxNumber) && (size >= minNumber)) 
        	{
           		break;
        	}
        else
           	cout << "Мы так не договаривались!" << endl;
   	} 
   	while (1);
    // 1 значит true, тоесть здесь бесконечный цикл

    p = new int[size];

    for (i = 0; i < size; i++) 
    {
        p[i] = pow (i, 3) + 1; 
        cout << p[i] << "\t";
    }

    cout << endl;

    delete p;
    return 0;
}