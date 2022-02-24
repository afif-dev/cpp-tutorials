#include <iostream>
#include <string>
using namespace std;

// class MyClass
// {
// public:
//     // int myNum;
//     // string myString;
// };

// int main()
// {
//     MyClass myObject;

//     myObject.myNum = 15;
//     myObject.myString = "Some text";

//     cout << myObject.myNum << "\n";
//     cout << myObject.myString;

//     return 0;
// }

class Car
{
public:
    string brand;
    string model;
    int year;
    void myCar()
    {
        cout << "My Car"
             << "\n";
    }
    void myOtherCar();
    int speed(int maxSpeed);
};

void Car::myOtherCar()
{
    cout << "My Other car"
         << "\n";
}

int Car::speed(int maxSpeed)
{
    return maxSpeed;
}

int main()
{
    Car carObj1;
    carObj1.brand = "BMW";
    carObj1.model = "X5";
    carObj1.year = 1999;

    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Mustang";
    carObj2.year = 1962;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";

    carObj1.myCar();
    carObj1.myOtherCar();

    cout << carObj2.speed(200);
    cin.get();
    return 0;
}