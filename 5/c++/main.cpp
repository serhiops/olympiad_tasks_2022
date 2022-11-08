#include<iostream>
#include<string>
#include<iomanip>
#include<clocale>   //for setlocale
using namespace std;

int main(int argc, char const *argv[])
{
    setlocale(LC_ALL, "Ukrainian");

    string word{"Слава Україні!"};   //Unfortunately, the Windows console does not support the Ukrainian language
    string numbers{"004014063076165102 022032003012005!"};
    string alphabet{"абвгґдеєжзиіїйклмнопрстуфхцчшщьюя"};

    size_t index{1};
    for(char symbol : word)
    {

        if(isspace(symbol) || ispunct(symbol))
        {
            index = 1;
            cout << symbol;
        }
        else{
            cout << setw(3) << setfill('0') << (alphabet.find((char)tolower(symbol)) + 1) * index;
            ++index;
        }
    }

    cout << endl;

    index = 1;
    for(size_t i{0}; i < numbers.length(); )
    {
        if(isspace(numbers[i]) || ispunct(numbers[i]))
        {
            index = 1;
            cout << numbers[i];
            ++i;
        }
        else
        {
            cout << alphabet[ (stoi(numbers.substr(i, 3)) - 1)/index ];
            i+=3;
            ++index;
        }
    }
	return 0;
}