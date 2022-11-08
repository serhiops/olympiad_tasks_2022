#include<iostream>
using namespace std;

#define ASCII_MINUS 96

int main(int argc, char const *argv[])
{
    char x; short y;
    cin >> x >> y;
    x -= ASCII_MINUS;   //char is implemented as an integer value

    if((y != 8 && y != 1) && (x != 1 && x != 8))   //whether the point lies on the border
        cout << 8;

    else if(x == y || (x == 8 && y == 1) || (x == 1 && y == 8))  //or lies on the edges
        cout << 3;

    else
        cout << 5;
	return 0;
}