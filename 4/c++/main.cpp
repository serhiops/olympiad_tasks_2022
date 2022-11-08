#include<iostream>
using namespace std;

#define SILVER 8
#define FLINT 16

int main(int argc, char const *argv[])
{
    int coins, shipboys, sailors, cannoneers, captains_assistants;
    cin >> coins >> shipboys >> sailors >> cannoneers >> captains_assistants;

    int total = shipboys + sailors*2 + cannoneers*4 + captains_assistants*8 + SILVER + FLINT;
    //each subsequent one receives twice as much as the previous one

    cout << coins/total << ' '
         << coins/total * 2 << ' '
         << coins/total * 4 << ' '
         << coins/total * 8 << ' '
         << coins/total * 8 + coins - coins/total * total << ' '
         << coins/total * 16 << endl;

	return 0;
}