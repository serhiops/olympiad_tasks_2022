#include <stdio.h>
#include<stdint.h>
#define ASCII_MINUS 96
#define COLS 8

int8_t arr[COLS][COLS] = {
    {3,5,5,5,5,5,5,3},
    {3,8,8,8,8,8,8,3},
    {3,8,8,8,8,8,8,3},
    {3,8,8,8,8,8,8,3},
    {3,8,8,8,8,8,8,3},
    {3,8,8,8,8,8,8,3},
    {3,8,8,8,8,8,8,3},
    {3,5,5,5,5,5,5,3},
};

int main(int argc, char** argv)
{
    int8_t x; char y;
    scanf("%c %d",&y,&x);
    printf("%d", arr[x-1][y - ASCII_MINUS-1]);
    return 0;
}
