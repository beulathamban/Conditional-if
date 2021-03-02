

#include <iostream>
#include <string>
#include <windows.h>
using namespace std;

int main()
{
    int age;
    string personName;
    system("Color 09");
    cout << "Enter your name, please:  ";
    cin >> personName;

    cout << "\n How old are you ? ";
    cin >> age;

    //conditional if- else structure
    if (age >= 16) {
        cout << " \n Hi " << personName << ", Congratulations! You can drive ";
    } else {
        cout << " \n Hi " << personName << ", Sorry! You cannot drive ";
    }
    cout << "\n End of program";
}

