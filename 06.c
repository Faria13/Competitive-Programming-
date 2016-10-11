#include <stdio.h>
#include <string.h>

int main()
{
    int i,length = 0;

    char str[100];

    while(gets(str)){
    length = strlen(str);
    int Vowel = 0,Consonant = 0;

    for(i = 0; i < length; i++)
        if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
            Vowel++;
        else
            Consonant++;

        printf("Vowel = %d Consonant = %d\n",Vowel,Consonant);
    }

    return 0;
}
