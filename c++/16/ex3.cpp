#include<iostream>
#include<string.h>
//содержит функции обработки символов
#include<cctype>

using namespace std;

class Stroka{
public:
    char s[256];

public:
    //конструктор
    Stroka(){}

    //сеттер
    Stroka(char *str){
        strcpy(s, str);
    }

    /* переопределяем оператор +
     * теперь он меняет сколько-то первых символов на другой символ
     */
    friend Stroka operator + (Stroka s1, int n){
        Stroka str;
        int i;
        strcpy(str.s, s1.s);
        for (i = 0; i < n; i++){
            str.s[i] = '*';
        }
        str.s[strlen(s1.s)] = 0;
        return str;
    }

    /* переопределяем оператор -
     * теперь он меняет местами сколько-то первых символов с последними
     */
    friend Stroka operator - (Stroka s1, int n)
    {
        Stroka str;
        strcpy(str.s, s1.s);
        int l = strlen(s1.s);
        for (int i = l; i > l - n - 1; i--)
            cout<<s1.s[i];
        for (int i = n; i < l - n; i++)
            cout<<s1.s[i];
        for (int i = 0; i < n; i++)
            cout<<s1.s[i];
        str.s[strlen(s1.s)] = 0;
        return str;
    }

    /* переопределяем опрератор ==
     * теперь он проверяет входит ли вторая строка в первую
     */
    friend bool operator == (Stroka s1, Stroka s2){
        if (strstr(s1.s, s2.s))
            return true;
        return false;
    }

    //деструктор
    ~Stroka() {}
};

int main(){
    Stroka s1, s2;
    char sa[256], sb[256];
    int n;
    cout<<"Введите S1: ";
    cin>>sa;
    strcpy(s1.s, sa);
    cout<<"Введите S2: ";
    cin>>sb;
    strcpy(s2.s, sb);

    cout<<"Проверка вхождения сторки S2 в стороку S1."<< endl;
    if (s1 == s2)
        cout << "Вхождения есть." << endl;
    else
        cout << "Вхождений нет." << endl;

    cout<<"\nЗамена n первых символов некоторый символ."<< endl;
    cout<<"Введите количество символов n: ";
    cin>>n;
    s1 = s1 + n;
    cout <<s1.s<<endl;

    cout<<"\nОбмен в S1 первых n символов на n последних и наоборот."<< endl;
    cout<<"Введите количество символов n: ";
    cin>>n;
    s1 = s1 - n;
    cout<<"\n";
    return 0;
}