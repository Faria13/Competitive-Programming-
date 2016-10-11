#include <stdio.h>
int main()
{
    int num,a,b,c,d,sum;
    sum = 0;
    num = 5678;

    a = num/1000;
    num = num%1000;

    b = num/100;
    num = num%100;

    c = num/10;
    num = num%10;

    d = num;

    sum = a+b+c+d;

    printf("Sum = %d\n",sum);

    return 0;
}
