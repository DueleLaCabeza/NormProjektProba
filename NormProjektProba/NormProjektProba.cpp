#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
using namespace std;

int main()
{
    const int mapy = 20;
    const int mapx = 20;
    char map[mapx][mapy];
    for (int i = 0; i < mapx; i++)
    {
        for (int j = 0; j < mapy; j++)
        {
            if (i == 0 or j == 0 or i==19 or j==19)
            {
                map[i][j] = '@';
            }
            else
            {
                map[i][j] = ' ';
            }
            
        }
    }
    int PositionSnake[2] = { 5,5 };
    char key = ' ';
    while (true)
    {
        system("cls");
        map[PositionSnake[0]][PositionSnake[1]] = '@';
        for (int i = 0; i < mapx; i++)
        {
            for (int j = 0; j < mapy; j++)
            {

                cout<< map[i][j];
               
            }
            cout << endl;
        }
        key = _getch();
        map[PositionSnake[0]][PositionSnake[1]] = ' ';
        if (key == 'd' and PositionSnake[1] != mapy - 1)
        {
            PositionSnake[1] += 1;
        }
        if (key == 'a')
        {
            PositionSnake[1] -= 1;
        }
        if (key == 'w')
        {
            PositionSnake[0] -= 1;
        }
        if (key == 's')
        {
            PositionSnake[0] += 1;
        }

    }
    cout << "You entered: " << key << endl;
}//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
