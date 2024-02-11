#include <iostream>
#include <chrono>
#include <thread>
#include <conio.h>
using namespace std;

int main()
{
    const int mapy = 50;
    const int mapx = 20;
    char map[mapx][mapy];
    for (int i = 0; i < mapx; i++)
    {
        for (int j = 0; j < mapy; j++)
        {
            if (i == 0 or j == 0 or i== mapx-1 or j== mapy-1)
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
            PositionSnake[1]+=1;
            if (map[PositionSnake[0]][PositionSnake[1]] == '@')
            {
                PositionSnake[1] -= 1;
            }
        }
        if (key == 'a')
        {
            PositionSnake[1] -= 1;
            if (map[PositionSnake[0]][PositionSnake[1]] == '@')
            {
                PositionSnake[1] += 1;
            }
        }
        if (key == 'w')
        {
            PositionSnake[0] -= 1;
            if (map[PositionSnake[0]][PositionSnake[1]] == '@')
            {
                PositionSnake[0] += 1;
            }
        }
        if (key == 's' and map[PositionSnake[0]+1][PositionSnake[1]] != '@')
        {
            PositionSnake[0] += 1; 
        }

    }
    cout << "You entered: " << key << endl;
}