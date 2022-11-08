#include<iostream>
#include<string>
#include<algorithm>
#include<set>
using namespace std;

#define max_s string::npos

string vowels{ "aeiouy" };
string consonants{ "bcdfghjklmnpqrstvwxz" };

void combinations(int k, const std::string& word, set<string>& result, string s="")
{
    if(k == 0){
        bool isGood{true};
        for(size_t i{0}; i < s.length() - 1; ++i)
        {
            if( (vowels.find(s[i])!= max_s && vowels.find(s[i + 1]) != max_s) ||           //check the neighboring vowels
                (consonants.find(s[i])!= max_s && consonants.find(s[i + 1]) != max_s) ||   //check the neighboring consonants
                (count(begin(s), end(s), s[i]) > count(begin(word), end(word), s[i])) )
            {
                isGood = false;
                break;
            }
        }
        if(isGood)
            result.emplace(s);
        return;
    }
    for(char c : word)
        combinations(k-1, word, result, s + c);
}

int main(int argc, char const *argv[])
{
    string str; int number;
    cin >> str >> number;
    transform(begin(str), end(str), begin(str), [](unsigned char c){ return tolower(c); }); //to lower case
    set<string> result;
    combinations(number, str, result);
    for(auto& ob : result)
        cout << ob << ' ';
    cout << endl;
	return 0;
}
