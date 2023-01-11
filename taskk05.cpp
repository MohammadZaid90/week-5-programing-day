#include <iostream>
#include <windows.h>
using namespace std;

void printMaze();
void gotoxy(int x, int y);
void printPacman(int x, int y);
char getCharAtxy(short int x, short int y);
void erase(int x, int y);

int main()
{
    int pX = 4;
    int pY = 4;

    bool gameRunning = true;

    system("cls");
    printMaze();

    printPacman(pX, pY);

    while (gameRunning)
    {
        if (GetAsyncKeyState(VK_LEFT))
        {
            char nextLocation = getCharAtxy(pX - 1, pY);
            if (nextLocation == ' ')
            {
                erase(pX, pY);
                pX = pX - 1;
                printPacman(pX, pY);
            }
        }

        if (GetAsyncKeyState(VK_RIGHT))
        {
            char nextLocation = getCharAtxy(pX + 1, pY);
            if (nextLocation == ' ')
            {
                erase(pX, pY);
                pX = pX + 1;
                printPacman(pX, pY);
            }
        }

        if (GetAsyncKeyState(VK_UP))
        {
            char nextLocation = getCharAtxy(pX, pY - 1);
            if (nextLocation == ' ')
            {
                erase(pX, pY);
                pY = pY - 1;
                printPacman(pX, pY);
            }
        }

        if (GetAsyncKeyState(VK_DOWN))
        {
            char nextLocation = getCharAtxy(pX, pY + 1);
            if (nextLocation == ' ')
            {
                erase(pX, pY);
                pY = pY + 1;
                printPacman(pX, pY);
            }
        }

        if (GetAsyncKeyState(VK_ESCAPE))
        {
            gameRunning = false;
        }
        Sleep(200);
    }
}

void printMaze()
{
    cout << "%%%%%%%%%%" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%        %" << endl;
    cout << "%%%%%%%%%%" << endl;
}

void gotoxy(int x, int y)
{
    COORD coordinates;
    coordinates.X = x;
    coordinates.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}

char getCharAtxy(short int x, short int y)
{
    CHAR_INFO ci;
    COORD xy = {0, 0};
    SMALL_RECT rect = {x, y, x, y};
    COORD coordBufSize;
    coordBufSize.X = 1;
    coordBufSize.Y = 1;
    return ReadConsoleOutput(GetStdHandle(STD_OUTPUT_HANDLE), &ci, coordBufSize, xy, &rect) ? ci.Char.AsciiChar : ' ';
}

void erase(int x, int y)
{
    gotoxy(x, y);
    cout << " ";
}

void printPacman(int x, int y)
{
    gotoxy(x, y);
    cout << "p";
}