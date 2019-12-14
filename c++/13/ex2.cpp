#include <iostream>
#include <cstdlib>
using namespace std;

struct date
{
	int day;
	string month;
	int year;
};

struct persone
{
	string firstname;
	string lastname;
	struct date bd;
};

/*persone ->
 * 			firstname
 * 			lastname
 * 			bd ->
 * 				 day
 * 				 month
 * 				 year
 */

int main()
{
	setlocale(LC_ALL, "RUS");

	// 1cat, кот, cat cat - нельзя
	struct persone p;
	// struct persone d; // cin >> d.firstname;
	cout << "Введите имя: ";
	cin >> p.firstname;
	cout << "Введите фамилию: ";
	cin >> p.lastname;
	cout << "\nВведите дату рождения\nЧисло: ";
	cin >> p.bd.day;
	cout << "Месяц: ";
	cin >> p.bd.month;
	cout << "Год: ";
	cin >> p.bd.year;
	cout << "\nВы ввели: " << p.firstname << " " << p.lastname << ", дата рождения "
		<< p.bd.day << " " << p.bd.month << " " << p.bd.year << " года." << endl;

	return 0;
}
