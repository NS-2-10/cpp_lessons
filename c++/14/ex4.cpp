#include <iostream>
#include <cstdlib>
using namespace std;

struct book
{
 string title;
 string author;
 int value;
};

int main ()
{
  struct book *lib; // struct book lib[3];
  int i;
  lib = new book[3];
  for(i = 0; i < 3; i++)
  {
    cout << "Введите название " << i + 1 << " книги: ";
    cin >> (lib+i)->title; //cin >> lib[i].title;
    cout << "Введите автора " << i + 1 << " книги: ";
    cin >> (lib+i)->author; //cin >> lib[i].author;
    cout << "Введите цену " << i + 1 << " книги: ";
    cin >> (lib+i)->value; //cin >> lib[i].value;
  }
  cout << endl;
  for(i = 0; i < 3; i++)
  {
    cout << "#" << i+1 << ". " << (lib+i)->author << " " << (lib+i)->title << " " << (lib+i)->value << endl;
  }

  delete lib;
	
  return 0;
}