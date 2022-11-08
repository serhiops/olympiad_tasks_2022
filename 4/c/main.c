#include <stdio.h>

int main(int argc, char** argv)
{
    int coins=2160, shipboys=1, sailors=2, cannoneers=1, captains_assistants=1;
    scanf("%d %d %d %d %d",&coins,&shipboys,&sailors,&cannoneers,&captains_assistants);
    int total = shipboys + sailors*2 + cannoneers*4 + captains_assistants*8 + 24;

    printf("%d %d %d %d %d %d",
           coins/total,
           coins/total*2,
           coins/total*4,
           coins/total*8,
           coins/total*8 + coins-coins/total*total,
           coins/total*16);
    return 0;
}
