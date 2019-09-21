#include <iostream>
using namespace std;

int main ()
{
	const int dim1 = 3;
    const int dim2 = 5;
    const int dim3 = 2;

    int mas[dim1][dim2][dim3];

    for (int i = 0; i < dim1; i++) 
    {
        for (int j = 0; j < dim2; j++) 
        {
            for (int k = 0; k < dim3; k++) 
            {
                mas[i][j][k] = (i + 1) * 100 + (j + 1) * 10 + (k + 1);
                cout << mas[i][j][k] << " ";
            }
            cout << endl;
        }
         cout << endl;
    }

	return 0;
}

