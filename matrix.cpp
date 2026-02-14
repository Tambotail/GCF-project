#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

int main() {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    srand(time(0));

    while (true) {
        SetConsoleTextAttribute(hConsole, 2); // Green color
        
        int x = rand() % 120;  // Width
        int y = rand() % 30;   // Height

        COORD coord;
        coord.X = x;
        coord.Y = y;

        SetConsoleCursorPosition(hConsole, coord);

        cout << (rand() % 2);

        Sleep(50);
    }

    return 0;
}
