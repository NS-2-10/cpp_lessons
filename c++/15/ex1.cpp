#include <iostream>
using namespace std;

const int m = 3;
void aver(int*); // прототип

int main ()
{
    struct cards{
        string surname, name;
        int age, rates[m];
        };

    int num;
    cout << "--------------------------------------------------------" << endl;
    cout << "Введите количество учеников: ";
    cin >> num;
    cout << "--------------------------------------------------------" << endl;
    cards *card = new cards[num];

    for (int i = 0; i < num; i++) {
      cout << "Фамилия: ";
      cin >> card[i].surname; // (card+i)->surname;
      cout << "Имя: ";
      cin >> card[i].name;
      cout << "Оценки (математика, литература, английский): ";
      for (int j = 0; j < m; j++){
          cin >> card[i].rates[j];
      }
      //вызываем нашу функцию и передаем ей массив с оценками
      aver(card[i].rates);
      cout << "--------------------------------------------------------" << endl;
    }

    //очищаем одолженную память
    delete [] card;
	
	return 0;
}

void aver(int *rates){
    float aver = 0, count = 0.0;
    for (int i = 0; i < m; i++)
    {
        if (rates[i] > 9)
            count++;
    }
    aver = (count / m) * 100;
    cout << "Средний бал: " << aver <<  "%" << endl;
}

// структура mice - имя, массив с кусками сыра за 2 дня
// в функции посчитать среднее арифметическое в массиве