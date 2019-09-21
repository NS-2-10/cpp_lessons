//#include "pch.h"
#include <iostream>
// rand(); srand();
#include <cstdlib>
// time();
#include <ctime>
using namespace std;

int main ()
{
	setlocale (LC_ALL, "rus");

	const int w = 10;
	int qwer[w], i, max, min, nax = 0, nin = 0, vedro = 0;

	srand(time(NULL));

	for (i = 0; i < w; i++)
	{
		qwer[i] = rand() % 21;
		cout << qwer[i] << "\t";
	}

	max = qwer[0];
	min = qwer[0];

	for (i = 0; i < w; i++)
	{
		if (max < qwer[i])
		{
			max = qwer[i];
			nax = i;
		}

		if (min > qwer[i])
		{
			min = qwer[i];
			nin = i;
		}
	}

	vedro = qwer[nax];
	qwer[nax] = qwer[nin];
	qwer[nin] = vedro;

	cout << endl;

	for (i = 0; i < w; i++)
		cout << qwer[i] << "\t";

	return 0;
}

