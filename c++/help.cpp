#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// *** вокзальная касса ***
// количество поездов заранее не известно, получаем рандомно
// есть поломка + 1, нет поломки - стандартно 10
// значение вагона - количество пассажиров. максимальное количество - 40 человек
// стоимость биллетов 600 грн

int main ()
{
  setlocale (LC_ALL, "rus");
  srand (time (NULL));
  int **s = NULL;
  const int c = 10, p = 40;
  int n_c;

  // узнать, сколько будет поездов
  int n_t = rand () % 8 + 1; // 1...8
  s = new int*[n_t]; // создали платформы

  // узнать, в порядке ли вагоны
  int ok = rand () % 2; // 0...1
  if (ok == 0)
  {
    cout << "Внимание! Произошла поломка вагона." << endl;
    n_c = c + 1;
  }
  else
  {
    cout << "Вагоны готовы к отправке." << endl;
    n_c = c;
  }

  // ставим вагоны на платформы
  for (int i = 0; i < n_t; i++)
  {
    s[i] = new int[n_c]; 
  }

  // считаем кассу мечты
  const int t = 600; // цена билета
  const int d_m = n_t * n_c * p * t;
  int r_m = 0; // сколько сейчас в кассе
  int m_m = 0;

  // заполняем вагоны, считаем денежки, выводим 
  for (int i = 0; i < n_t; i++)
  {
    for (int j = 0; j < n_c; j++)
    {
      s[i][j] = rand () % (p + 1); // 0...40;
      r_m = d_m - s[i][j] * t;

      cout << s[i][j] << "\t";
    }
    cout << endl;
  }
  m_m = d_m - r_m;

  // выводим денежки
  cout << "нужно, чтобы было в кассе: " << d_m << endl;
  cout << "лежит в кассе: " << r_m << endl;
  cout << "нужно заработать: " << m_m << endl;

  // уничножаем
  for (int i = 0; i < n_t; i++)
  {
    delete [] s[i];
  }
  delete s;

  return 0;
}