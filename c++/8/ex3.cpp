#include <iostream>
using namespace std;

int main ()
{
   int mas[10];
   int i;

   // кпкпкп...
   for (i = 0; i < 10; i += 2) // i = i + 2
   {
       cin >> mas[i]; // 0 2 4 6 8
       mas[i + 1] = i; // 1 3 5 7 9
   }

   for (i = 0; i < 10; i++)
       cout << mas[i] << " ";

   cout << endl;


   for (i = 0; i < 10 / 2; i++)
       cin >> mas[i];
   // 0 0 0 0 0 - - - - - 

   for (i = 10 / 2; i < 10; i++)
       mas[i] = i * 2;
      // 0 0 0 0 0 0 0 0 0 0 

   for (i = 0; i < 10; i++)
       cout << mas[i] << " ";

    cout << endl;
	
	return 0;
}

