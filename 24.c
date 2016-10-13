#include <stdio.h>
int main()
{
    int width,height;
    double area;

    while(scanf("%d%d",&width,&height) == 2){

        area = .5*width*height;

        printf("The area of Triangle: %0.2lf\n",area);
    }

    return 0;
}
