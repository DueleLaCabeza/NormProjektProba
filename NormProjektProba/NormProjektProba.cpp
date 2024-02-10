#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
using namespace std;

int main()
{
    char map[20][20];
    for (int i = 0; i < 20; i++)
    {
        for (int j = 0; j < 20; j++)
        {
            map[i][j] = ' ';
        }
    }

    int SpawnpointSnake[2] = {5,5};
    int PositionSnake[2];
    char key = ' ';
    while (true)
    {
        for (int i = 0; i < 20; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                cout<< map[i][j];
            }
        }
        key = _getch();
        if (key == 'w')
        {
            
        }
    }
    cout << "You entered: " << key << endl;
}//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
