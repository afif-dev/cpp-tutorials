#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter your age: ";
    cin >> age;

    try
    {
        if (age >= 18)
        {
            cout << "Access granted - you are old enough. \n";
        }
        else
        {
            // throw(age);
            throw 505;
        }
        
    }
    // catch (int myNum)
    catch (...) // Handle Any Type of Exceptions (...)
    {
        cout << "Access denied - You must be at 18 years old. \n";
        // cout << "Age is: " << myNum;
        // cout << "Error numbers: " << myNum;
    }

    system("PAUSE");
    return 0;
}
