#define CATCH_CONFIG_MAIN
#include "../src/board.h"
#include "../thirdparty/catch/catch.hpp"

TEST_CASE("t1")
{
    REQUIRE(1 == 1);
}

char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                   {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                   {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                   {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                   {' ', 'a', '6', 'c', 'd', 'e', 'f', 'g', 'h'}};

TEST_CASE()
{
    int i1 = 6, j1 = 5, i2 = 5, j2 = 5;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    REQUIRE(expected == result);
}
