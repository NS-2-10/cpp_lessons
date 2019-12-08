#include <iostream>
using namespace std;

#define SIZE 10

int main ()
{
	// const int SIZE = 10;

	int **A;
    int i, j;
    
    A = new int*[SIZE];

    for (i = 0; i < SIZE; i++)
        A[i] = new int[i + 1];

/*
 * 1    0   0   2
 * 0    1   2   0
 * 0    2   1   0
 * 2    0   0   1
 */


    for (i = 0; i < SIZE; i++)
    {
        for (j = i; j > 0; j--)
        {
            A[i][j] = i * j;
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }


    for (i = SIZE - 1; i > 0; i--)
        delete [] A[i];

    delete A;
	
	return 0;
}

