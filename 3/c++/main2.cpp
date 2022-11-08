#include<iostream>
using namespace std;

#define ASCII_MINUS 97
#define COLS 8

/*
Imagine that the chessboard is a two-dimensional array,
where the x-axis coordinate is the number from 1 to 8 ,
and the y-axis is the letter from a to h.

The value of the corresponding points is the number of possible moves.
*/

short arr[COLS][COLS]
{
    {3,5,5,5,5,5,5,3},
    {5,8,8,8,8,8,8,5},
    {5,8,8,8,8,8,8,5},
    {5,8,8,8,8,8,8,5},
    {5,8,8,8,8,8,8,5},
    {5,8,8,8,8,8,8,5},
    {5,8,8,8,8,8,8,5},
    {3,5,5,5,5,5,5,3},
};

int main(int argc, char const *argv[])
{
    char y; short x;
    cin >> y >> x;
    cout << arr[x - 1][y - ASCII_MINUS];
	return 0;
}
