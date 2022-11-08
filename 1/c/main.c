#include <stdio.h>
#include <string.h>
#include <stdbool.h>

const char* vowels = { "aeiouy" };
const char* consonants = { "bcdfghjklmnpqrstvwxz" };

char result[] = {""};

size_t countOfCharacter(const char* str1,const char* str2,const char symbol)
{
    unsigned short counter1 = 0;
    unsigned short counter2 = 0;
    for(size_t i = 0;i<strlen(str1);++i)
        if(str1[i] == symbol)
            ++counter1;

    for(size_t i = 0;i<strlen(str2);++i)
        if(str2[i] == symbol)
            ++counter2;

    return counter1 > counter2;
}

void combinations(int k,const char* word,const char* s)
{
    if(k == 0){
        bool isGood = true;
        for(int i = 0; i< strlen(s) - 1; ++i)
        {
            if(strchr(vowels, s[i]) && strchr(vowels, s[i+1]) ||
               strchr(consonants, s[i]) && strchr(consonants, s[i+1]) ||
               countOfCharacter(s, word, s[i]))
            {
                isGood = false;
                break;
            }
        }
        if(isGood && !strstr(result, s)){
            strcat(result, s);
            strcat(result, " ");
        }
    }
    else{
        for(int i = 0; i < strlen(word);++i)
        {
            char data[strlen(s) + 2];
            strcpy(data, s);
            data[strlen(s)] = word[i];
            data[strlen(s)+1] = '\0';
            combinations(k - 1,word,data);
        }
    }
}

int main(int argc, char** argv)
{
    char str[20];
    int k;
    scanf("%s %d", str, &k);
    char s[] = {""};
    combinations(k, str, s);
    printf("%s", result);
    return 0;
}


