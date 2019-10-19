#include <iostream>
using namespace std;

/*
   вводим 3 числа, проверяем на четность
   если да, то выводим.
   если ни одного - говорим об этом.
*/

int main()
{
	setlocale(LC_ALL, "RUS");

	int bim, bom, bam;

	cout << "bim = "; cin >> bim;
	cout << "bom = "; cin >> bom;
	cout << "bam = "; cin >> bam;

	// 1

	if(bim % 2 == 0)
		cout << "чёт: " << bim << endl;

	if(bom % 2 == 0)
		cout << "чёт: " << bom << endl;

	if(bam % 2 == 0)
		cout << "чёт: " << bam << endl;

	if (bim % 2 == 1 && bom % 2 == 1 && bam % 2 == 1)
		cout << "все нечёт" << endl;

	// 2
	int n = 0;

	if (bim % 2 == 0)
	{
		cout << "чёт: " << bim << endl;
		n++;
	}

	if (bom % 2 == 0)
	{
		cout << "чёт: " << bom << endl;
		n++;
	}

	if (bam % 2 == 0)
	{
		cout << "чёт: " << bam << endl;
		n++;
	}

	if(n == 0)
		cout << "все нечёт" << endl;

	return 0;
}

