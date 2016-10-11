#include <stdio.h>
int main()
{
    int a=0,b=1,c,n,i;

    scanf("%d",&n);

    for(i = 0; i < n; i++){
        printf("%d ",a);
            c = a+b;
            a = b;
            b = c;
        }
        printf("\n");

    return 0;
}
/*int i,a=0,b=1,c;

    for(i = 0; i < 25; i++){
        printf("%d ",a);
        c = a+b;
        a = b;
        b = c;
    }
    printf("\n");
    */
