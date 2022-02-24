#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // create and open a text file
    ofstream myFile("filename.txt");
    // write the file
    myFile << "Files can be tricky. but it is fun enough!";
    // close the file
    myFile.close();

    // create a text string as output var
    string myText;

    ifstream myReadFile("filename.txt");

    while (getline(myReadFile, myText))
    {
        cout << myText;
    }

    myReadFile.close();
    
    cin.get();
    return 0;
}
