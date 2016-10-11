#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,ans;
    scanf("%lf%lf",&a,&b);

    ans = pow(a,b);

    printf("ans = %0.2lf\n",ans);

    return 0;
}
