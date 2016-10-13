#include <stdio.h>
#define PI 3.14159
int main()
{
    int radious;
    double area;
    while(scanf("%d",&radious) == 1){

        area = PI*radious*radious;
        printf("Area = %0.2lf\n",area);

    }

    return 0;
}
