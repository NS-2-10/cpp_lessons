#include <iostream>
#include <string>

using namespace std;

class Sweets{

    /*
    private - можно использовать элементы класса только внутри основного своего класса
    public — можно использовать элементы класса либо в других частях программы, либо в других классах
    protected — можно использовать элементы класса либо внутри непосредственно своего основного класса,
    либо непосредственно в своём потомке-классе
     */

    /*
     * Конструктор – это специальный метод класса, который предназначен для инициализации
     * элементов класса начальными значениями
     * Конструктор мы всегда объявляем в разделе public
     * При объявлении конструктора, тип данных возвращаемого значения не указывается
     * Имена класса и конструктора должны быть одинаковыми
     * В классе можно создавать несколько конструкторов, если это нужно. Компилятор будет
     * их различать по передаваемым параметрам. Если мы не передаем в конструктор параметры,
     * он считается конструктором по умолчанию
     */

private:
    string name;
public:
    Sweets(string sName){
       setSweets(sName);
    }

    /* Сеттеры и гетеры - функци, позволяющие устанавливать и узнавать значения элементов
     * Реализуют инкапсуляцию - процесс скрытого хранения деталей реализации объекта
     */

    void setSweets(string sName){
    name = sName;
    }

    void getName(){
    cout<<"----------------------------------------------------------------\n";
    cout<<"Название конфет: "<<name<<"\n";
    }

private:
    float price, weight;
public:
    Sweets(float sPrice, float sWeight){
        setInfo(sPrice, sWeight);
    }

    void setInfo(float sPrice, float sWeight){
        price = sPrice;
        weight = sWeight;
    }
    void getInfo(){
        cout << "Цена: " << price << endl;
        cout << "Вес: " << weight << endl;
    }

    float getPrice(){
        return price;
    }

};

int main(){
    int num, i;
    string name;
    float price, weight, sum = 0.0;
    cout << "Введите количество видов конфет: ";
    cin >> num;
    Sweets *sweets[50];
    for (i = 0; i < num; i++){
        cout << "*****************************************************************\n";
        cout << "Конфеты " << 1 + i << "\n";
        cout << "\nВведите название конфет: ";
        cin >> name;
        cout << "Введите цену конфет: ";
        cin >> price;
        cout << "Введите вес конфет: ";
        cin >> weight;
    sweets[i] = new Sweets(name);
    sweets[i] -> setInfo(price, weight);
    sum = sum + sweets[i] -> getPrice();
    }
    cout << "\nВсего продано на сумму: " << sum << " грн." << endl;
    return 0;
}