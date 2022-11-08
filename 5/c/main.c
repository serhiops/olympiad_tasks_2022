#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<ctype.h>

int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Ukrainian");
    char word[] = {"слава україні!"};
    char numbers[] = {"004014063076165102 022032003012005!"};
    char alphabet[] = {"абвгґдеєжзиіїйклмнопрстуфхцчшщьюя"};

    for(size_t i = 0, index = 1; i < strlen(word); ++i)
    {
        if(isspace(word[i]) || ispunct(word[i])){
            index = 1;
            printf("%c", word[i]);
        }
        else{
            printf("%03d", ((int)(strchr(alphabet, word[i]) - alphabet)+1)*index);
            ++index;
        }
    }
    printf("\n");
    for(size_t i=0, index=1; i < strlen(numbers); )
    {
        if(isspace(numbers[i]) || ispunct(numbers[i]))
        {
            index = 1;
            printf("%c", numbers[i]);
            ++i;
        }
        else
        {
            char substr[4];
            memcpy(substr, &numbers[i], 3);
            substr[3] = '\0';
            printf("%c", alphabet[(atoi(substr) - 1)/index]);
            i+=3;
            ++index;
        }
    }

	return 0;
}
