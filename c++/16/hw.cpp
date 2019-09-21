#include <iostream>
#include <string>

using namespace std;

class Games{


private:
    string name;
public:
    Games(string sName){
    setGames(sName);
    }



    void setGames(string sName){
    name = sName;
    }

    void getName(){
    cout<<"----------------------------------------------------------------\n";
    cout<<"Nazvanie igru: "<<name<<"\n";
    }

private:
    float price, genre;
public:
    Games(float sPrice, float sGenre){
        setInfo(sPrice, sGenre);
    }

    void setInfo(float sPrice, float sGenre){
        price = sPrice;
        genre = sGenre;
    }
    void getInfo(){
        cout << "Cena: " << price << "\n";
        cout << "Ganr: " << genre << "\n";
    }
    float getPrice(){
        return price;
    }
};

int main(){
    int num;
    string name;
    float price, genre, sum = 0.0;
    cout << "Vvedite kol-vo igr: ";
    cin >> num;
    Games *games[50];
    for (int i = 0; i < num; i++){
        cout << "*****************************************************************\n";
        cout << "Igra " << 1 + i << "\n";
        cout << "\nVvedite nazvanie Igru: ";
        cin >> name;
        getchar();
        cout << "Vvedite cenu igru: ";
        cin >> price;
        getchar();
        cout << "Vvedite ganr igru: ";
        cin >> genre;
        getchar();
    games[i] = new Games(name);
    games[i] -> setInfo(price, genre);
    sum = sum + games[i] -> getPrice();
    }
    cout << "\nVsego prodano na summu: " << sum << " грн." << endl;

    return 0;
}
