#include <iostream>
#include <string>

using namespace std;

class Car
{
  private:
    string name;
    float price;
  
  public:
    Car (string cName, float cPrice)
    {
        setCarName(cName);
        setCarPrice(cPrice);
    }

    void setCarName(string cName) { name = cName; }

    void setCarPrice(float cPrice) { price = cPrice; }

    string getCarName() { return name; }

    float getCarPrice() { return price; }
};

int main()
{
    Car * car = new Car("Carl", 100);
    cout << "Имя машины: " << car -> getCarName() << endl;
    cout << "Цена машины: " << "$" << car -> getCarPrice() << endl;
    return 0;
}