#include <stdio.h>
int main()
{
    int a,b;

    while(scanf("%d%d",&a,&b) == 2){
        a = a+b;
        b = a-b;
        a = a-b;

        printf("A = %d B = %d\n",a,b);
    }

    return 0;
}
