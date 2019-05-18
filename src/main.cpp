#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main()
{
    char field[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                        {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                        {'2', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                        {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                        {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
    ChessField(field);

    while (true) {
        Move(field);
        ChessField(field);
    }
    return 0;
}