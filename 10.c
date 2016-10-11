#include <stdio.h>
int main()
{
    int n,i;

    while(scanf("%d",&n)== 1){

    double fact = 1;
    for(i = n; i >= 1; i--){
        fact = fact*i;
    }
    printf("%0.2f\n",fact);

    }

    return 0;
}
