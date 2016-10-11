#include <stdio.h>
int main()
{
    char str1[15];
    char str2[15];

    while(scanf("%s",str1) == 1){
        strcpy(str2,str1);
        strrev(str2);

    if(strcmp(str1,str2) == 0)
        printf("The string is Palindrome\n");
    else
        printf("The string is not Palindrome\n");

    }


    return 0;
}
