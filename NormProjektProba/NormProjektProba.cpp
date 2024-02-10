#include <chrono>
#include <iostream>
#include <thread>
#include <conio.h>
using namespace std;

int main()
{
    char key = ' ';
    cout << "Enter a key" << endl;
    key = _getch();
    cout << "You entered: " << key << endl;
}