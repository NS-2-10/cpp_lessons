#include <iostream>

using namespace std;

// базовый класс
class First{
// спецификатор доступа к элементу value
protected:
    int value;
public:
    First(){
        value = 0;
    }

    First(int input){
        value = input;
    }

    void show(){
        cout << value << endl;
    }
};

// производный класс
class Second : public First{
public:
    // конструктор класса Second вызывает конструктор класса First
    Second() : First (){}

    // inputS передается в конструктор с параметром класса First
    Second(int inputS) : First (inputS){}

    // возводит value в квадрат.
    // без спецификатора доступа protected эта функция не могла бы изменить значение value
    void valueSqr (){
        value *= value; // value = value * value;
    }
};

int main(){
    // объект базового класса
    First f(1);
    cout << "Значение объекта родительского класса: ";
    f.show();
    // объект производного класса
    Second s(6);
    cout << "Значение объекта дочернего класса: ";
    // вызов метода базового класса
    s.show();
    // возводим value в квадрат
    s.valueSqr();
    cout << "Квадрат значения дочениего класса: ";
    s.show();

    //f.valueSqr();
    // базовый класс не имеет доступа к методам дочернего класса

    return 0;
}

// создать родительский класс "кот" у которого есть имя
// содать дочерний класс "котенок" у которого тоже есть имя + умеет говорить "мур"