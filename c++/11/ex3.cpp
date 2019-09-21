#include <iostream>
using namespace std;

int main ()
{
	const int col = 10, row = 5;
	float **p = NULL;
    int i, j;

    p = new float*[row]; // создан вокзал с платформами, но без вагонов
    for (i = 0; i < row; i++)
        p[i] = new float[col]; // уже есть вагоны


    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            p[i][j] = i + j + 0.5;
            cout << p[i][j] << "\t";
        }
        cout << endl;
    }

    for (i = 0; i < row; i++)
        delete [] p[i]; // уничтожаем поезда

    delete p; // уничтожаем вокзал

    return 0;
}

