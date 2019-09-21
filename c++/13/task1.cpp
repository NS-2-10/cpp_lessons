#include <iostream>
#include <cstring>
using namespace std;

// ввсети массив
// буквы - в один массив, числа - в другой
/*
 * 1d#256fhu$%^fgy [i]
 * 1256            [j] j++
 * dfhufgy         [k] k++
 */ 

int main ()
{
	const int n = 10;
	char s[n], s1[n], s2[n], i, j = 0, k = 0;
	
	cout << "s: ";
	cin >> s;
	
	for (i = 0; i < strlen (s); i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			s1[j] = s[i];
			j++;
			}
		if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			s2[k] = s[i];
			k++;
			}
		}

	cout << s1 << endl << s2 << endl;
	
	return 0;
}

