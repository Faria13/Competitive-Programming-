#include <stdio.h>
int main()
{
    int length;
    double area;

    while(scanf("%d",&length) == 1){

        area = length*length*length;

        printf("The area of cube: %0.2lf\n",area);
    }

    return 0;
}
