#include <stdio.h>
int main(void)
{
    int i,n;
    double x,power;
    printf("Enter x,n:\n");
    scanf("%lf%d",&x,&n);
    power=1;
    for(i=1;i<=n;i++)
        power=power*x;
    printf("%0.f\n",power);
}
