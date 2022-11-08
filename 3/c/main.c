#include <stdio.h>
#define ASCII_MINUS 96

int main(int argc, char** argv)
{
    int x; char y;
    scanf("%c %d", &y, &x);
    y -= ASCII_MINUS;
    if(x!=1 && x!=8 && y!=1 && y!=8)
        printf("8");
    else if(x==y || (x==1&&y==8) || (x==8&&y==1))
        printf("3");
    else
        printf("5");
    return 0;
}
