#include <iostream>

using namespace std;

class Cat
{
protected:
    string name;

public:
    Cat() { name = "Мурчик"; }

    Cat(string cName) { name = cName; }

    void setName(string cName) { name = cName; }

    string getName() { return name; }

    void Hello() { cout << "Привет! Меня зовут " << name << endl; }
};

class Kitten : public Cat
{
public:
    Kitten() : Cat(){}

    Kitten(string kName) : Cat(kName) {}

    void Mur() { cout << "Котенок мурчит!" << endl; }
};

int main()
{
    Cat cat("Михаил");
    Kitten kitten("Михалыч");
    Kitten kitten2;
    cat.Hello();
    kitten.Mur();
    kitten.Hello();
    kitten2.Hello();
    return 0;
}

// класс "животное" (название и скорость)
// объекты кролик и черепаха
// сравнить скорости и вывести того, кто быстрее