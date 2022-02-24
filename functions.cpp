#include <iostream>
#include <string>
using namespace std;

// void myFunction()
// {
//     cout << "I just create this using function \n";
// }
void myFunction(string fname = "Izzy Boi", int age = 32)
{
    cout << fname << " Refsnes " << age << " years old. \n";
}

int myOtherFunction(int x, int y)
{
    return x + y;
}

void swapNum(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int main()
{
    int firstNum = 10;
    int secondNum = 20;
    // myFunction();
    myFunction();
    myFunction("Liam", 29);
    myFunction("Jenny", 21);
    myFunction("Anjay", 33);
    cout << myOtherFunction(10, 8) << "\n";
    cout << "Before swap: "
         << "\n";
    cout << firstNum << " : " << secondNum << "\n";

    swapNum(firstNum, secondNum);

    cout << "After swap: "
         << "\n";
    cout << firstNum << " : " << secondNum << "\n";
    
    cin.get();
    return 0;
}
