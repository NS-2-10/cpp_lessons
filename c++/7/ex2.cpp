#include <iostream>
using namespace std;

int main ()
{
	// small = d, big = e
	float x, y, small, big;

    cout << "Введите меньшую сторону прямоугольника: ";
    cin >> small;
    small /= 2; // small = small / 2;

    cout << "Введите большую сторону прямоугольника: ";
    cin >> big;
    big /= 2;

    cout << "Введите кординату х: ";
    cin >> x;

    cout << "Введите кординату у: ";
    cin >> y;

    if (x>0 && x<big && y>0 && y<small)
        cout << "Точка в зоне А" << endl;
    else
        if ((x<-big && y<0) || (x>-big && x < 0 && y<-small))
            cout << "Точка в зоне B" << endl;
        else
        	cout << "Точка вне зон A и B" << endl;
	
	return 0;
}

