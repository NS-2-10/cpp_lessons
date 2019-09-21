#include <iostream>
#include <cmath>
using namespace std;

int main ()
{
	float x, y, small, big;
    cout << "Введите радиус меньшего круга: ";
    cin >> small;
    while (1) {
        cout << "Введите радиус большего круга: ";
        cin >> big;
        if (big > small)
            break;
    }
    cout << "Введите кординату х: ";
    cin >> x;
    cout << "Введите кординату у: ";
    cin >> y;
    //всего будем рассматривать три варианта
    //два нужно рассписать, а третий и так очевиден
    //сложное условие
    if (pow(x,2) + pow(y,2) <= pow(big,2) && pow(x,2) + pow(y,2) >= pow(small,2) && x <= -small && y >= small)
        cout << "Точка в зоне А" << endl;
    else
        //другое сложное условие
        if (pow(x,2) + pow(y,2) <= pow(big,2) && pow(x,2) + pow(y,2)>= pow(small,2) && x>=small && y<=-small)
            cout << "Точка в зоне B" << endl;
        else
        	cout << "Точка вне зон A и B" << endl;
	
	return 0;
}

