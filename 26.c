#include <stdio.h>
int main()
{
    int length,width,height;

    double area;

    while(scanf("%d%d%d",&length,&width,&height) == 3){

        area = (length*width*height)/2;

        printf("The area of Trapizium : %0.2lf\n",area);
    }

    return 0;
}
