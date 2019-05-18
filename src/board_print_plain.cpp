#include "board.h"

void ChessField(char field[][9])
{
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << setw(2) << field[i][j];
        }
        cout << endl;
    }
}