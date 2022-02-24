#include <iostream>
#include <string>
using namespace std;

// Base class (parent)
class Vehicle
{
protected:
    string category;

public:
    string brand = "Ford";
    void honk()
    {
        cout << "Tuut, tuut \n";
    }
};
// Another base class
class Property
{
public:
    void propertyInfo()
    {
        cout << "Property Infos! \n";
    }
};

// Derived class (child)
class Car : public Vehicle
{
public:
    string model = "Mustang";
    void setCatgeory(string cat)
    {
        category = cat;
    }
    string getCategory()
    {
        return category;
    }
};
// Derived class (child) - Multilevel Inheritance
class CarType : public Car
{
public:
    string type = "Sedan";
};

class VechicleProperty : public Vehicle, public Property
{
};

int main()
{
    // Car myCar;
    CarType myCar;
    myCar.setCatgeory("Economy");
    myCar.honk();
    cout << myCar.brand + " " + myCar.model + " - " + myCar.type + " : " + myCar.getCategory() + "\n";

    VechicleProperty myVechicleProperty;
    myVechicleProperty.honk();
    myVechicleProperty.propertyInfo();
    
    cin.get();
    return 0;
}
