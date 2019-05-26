#include "../src/board.h"

int t1()
{
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 6;
    const int i2 = -1;
    const int j1 = 1;
    const int j2 = 1;

    const int result = MoveCheck(team, i1, i2, j1, j2, pole);

    const int expected = 0;
    return expected == result;
}

int t2()
{
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 1;
    const int i1 = 7;
    const int i2 = 6;
    const int j1 = 1;
    const int j2 = 1;

    const int result = MoveCheck(team, i1, i2, j1, j2, pole);

    const int expected = 0;
    return expected == result;
}

int t3()
{
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 6;
    const int i2 = 5;
    const int j1 = 1;
    const int j2 = 1;

    const int result = MoveCheck(team, i1, i2, j1, j2, pole);

    const int expected = 1;
    return expected == result;
}

int t4()
{
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 6;
    const int i2 = 1;
    const int j1 = 5;
    const int j2 = 1;

    const int result = MoveCheck(team, i1, i2, j2, j2, pole);

    const int expected = 0;
    return expected == result;
}