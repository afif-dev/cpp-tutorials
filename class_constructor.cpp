#include <iostream>
#include <string>
using namespace std;

class MyClass
{
public:
    MyClass()
    {
        cout << "MyClass constructors";
    }
};

class Car
{
public:
    string brand;
    string model;
    int year;
    Car(string x, string y, int z)
    {
        brand = x;
        model = y;
        year = z;
    }
};

class House
{
private:
    string phoneNum;

public:
    string address;
    string state;
    int postcode;
    House(string adds, string st, int po);
    void setPhone(string ph)
    {
        phoneNum = ph;
    }
    string getPhone()
    {
        return phoneNum;
    }
};

House::House(string adds, string st, int po)
{
    address = adds;
    state = st;
    postcode = po;
}

int main()
{
    MyClass myObject;

    Car myCar1("BMW", "x6", 2000);
    Car myCar2("Proton", "Saga", 1991);
    House myHouseObj("9, Jalan Cheras", "Kuala Lumpur", 45000);

    cout << myCar1.brand << " " << myCar1.model << " " << myCar1.year << "\n";
    cout << myCar2.brand << " " << myCar2.model << " " << myCar2.year << "\n";
    cout << myHouseObj.address << ", " << myHouseObj.state << ", " << myHouseObj.postcode << "\n";
    myHouseObj.setPhone("0194545890");
    cout << myHouseObj.getPhone();
    cin.get();
    return 0;
}
