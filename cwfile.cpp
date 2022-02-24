#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // create and open a text file
    ofstream myFile("filename.txt");
    // write the file
    myFile << "Files can be tricky. but it is fun enough!";
    // close the file
    myFile.close();

    cout << "filename.txt is created!";
    cin.get();
    return 0;
}