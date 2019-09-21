#include <iostream>
#include <string.h>
using namespace std;
// srtcpy(s1, s2); strcmp(s1, s2); strlen(s1); strstr(s1, s2); strcat(s1, s2);

int main ()
{
	char s[25];
    int i;

    cout << "Введите строку: ";
    cin >> s; 

    for(i = 0; i < strlen(s); i++)
    {
        // меняем цифру на +
        if(s[i] >= 48 && s[i] <= 57) // if (s[i] >= '0' && s[i] <= '9')
            s[i] = '+';
        // меняем строчную на /
        if(s[i] >= 97 && s[i] <= 122) // if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = '/';
        // меняем заглавную на *
        if(s[i] >= 65 && s[i] <= 90) // if (s[i] >= 'A' && s[i] <= 'Z')
            s[i] = '*';
    }

    cout << "Результат: " << s << endl; 
	
	return 0;
}

