#include <iostream>
using namespace std;

int main ()
{
	int i, j;
    const int n = 10;

    char mas[n];

    for (i = 0; i < n; i++)
        cin >> mas[i];

    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
            if (mas[i] == mas[j] && i != j)
            {
                // оставляем уникальные значения в центре
                mas[i] = '*';
                mas[j] = '*';

                // оставлять уникальные значения слева
                // mas[j] = '*';

                // оставлять уникальные значения справа
                // mas[i] = '*';
            }
    }

    for (i = 0; i < n; i++)
        cout << mas[i] << "\t";

    cout << endl;
	
	return 0;
}

