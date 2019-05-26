#include <stdio.h>
#include <stdlib.h>
int t1();

int main(int argc, const char** argv)
{
    int result = 0;
    int ltest = 0;

    ltest = t1();
    result += !ltest;
    fprintf(stderr, " Проверка на a9 : %s\n", ltest ? "TRUE" : "FALSE");

    return result;
}