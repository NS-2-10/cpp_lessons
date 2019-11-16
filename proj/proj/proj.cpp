#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));

	const int n = 4;
	int home[n];

	// in
	for(int i = 0; i < n; i++)
	{
		home[i] = rand() % 10; // 0..9
	}
	
	// out
	for (int i = 0; i < n; i++)
	{
		cout << home[i] << "\t";
	}

	cout << endl;
	return 0;
}