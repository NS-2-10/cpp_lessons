#include <iostream>
using namespace std;

int main ()
{
	const int n = 8;
	int mas[n] = {1, 0, 1, 0, 1, 0, 1, 0};
	int i, v = 0; 

	for (i = 0; i < n; i++)
		cout << mas[i] << " ";

	cout << "-> ";

	for (i = 0; i < n; i += 2)
	{
		v = mas[i];
		mas[i] = mas[i + 1];
		mas[i + 1] = v;
	}

	for (i = 0; i < n; i++)
		cout << mas[i] << " ";

	return 0;
}

// c = a;
// a = b;
// b = c;
