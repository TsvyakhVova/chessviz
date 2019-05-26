#include <stdio.h>
#include <stdlib.h>
int t1();
int t2();

int main(int argc, const char** argv)
{
    int result = 0;
    int ltest = 0;

    ltest = t1();
    result += !ltest;
    fprintf(stderr, " Проверка на a9 : %s\n", ltest ? "GOOD" : "BAD");

    ltest = t1();
    result += !ltest;
    fprintf(stderr, " Проверка хода a1-a2 : %s\n", ltest ? "GOOD" : "BAD");

    return result;
}