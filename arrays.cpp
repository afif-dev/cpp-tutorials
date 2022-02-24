#include <iostream>
#include <string>
#include <stack>
#define WIDTH 5

using namespace std;

int main()
{
    string cars[] = {"Volvo", "BMW", "Proton", "Mazda", "Honda"};
    cars[0] = "Merc";
    // cars[5] = "Volvo";
    cout << cars[0] << "\n";

    cout << "Cars with for loop: \n";
    for (int i = 0; i < 3; i++)
    {
        cout << cars[i] << "\n";
    }

    cout << "\nCars with for loop with each item: \n";
    for (string car : cars)
    {
        cout << car << "\n";
    }

    cout << WIDTH << "\n";

    std::stack<string> newstack;
    newstack.push("69");
    newstack.push("79");
    newstack.push("80");
    newstack.push("hello");

    cout << newstack.size() << "\n";

    while (!newstack.empty())
    {
        cout << newstack.top() << " ";
        newstack.pop();
    }

    cin.get();
    return 0;
}