#include <stdio.h>
int main()
{
    int a,chack,i,j,m,n,temp;

    while(scanf("%d%d",&m,&n)==2){

    if(m > n){
        temp = m;
        m = n;
        n = temp;
    }

    for(i = m; i <= n; i++){
        a = i;
        chack = 1;
        if(a == 1)
            chack = 0;
        for(j = 2; j < a; j++){
            if(a%j == 0)
                chack = 0;
        }
        if(chack == 1)
            printf("%d ",a);
        }
        printf("\n");

    }

    return 0;
}
