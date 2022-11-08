#include <stdio.h>

int main(int argc, char** argv)
{
    int boxes,cases,cartridges_in_cases,guns,cartridges_in_store;
    scanf("%d %d %d %d %d", &boxes, &cases, &cartridges_in_cases,&guns,&cartridges_in_store);

    int total_cartridges = boxes*cases*cartridges_in_cases;

    int full_stores = total_cartridges/(guns*cartridges_in_store);

    int remainder_stores = (total_cartridges-full_stores*guns*cartridges_in_store)/cartridges_in_store;

    int remainder_cartridges = total_cartridges-full_stores*guns*cartridges_in_store-remainder_stores*cartridges_in_store;

    printf("%d %d %d\n", full_stores,remainder_stores,remainder_cartridges);
    return 0;
}
