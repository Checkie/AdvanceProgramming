#include <stdio.h>
int main(void)
{
    int i,j;
    double item,sum;
    sum=0;
    for(i=1;i<=100;i++)
    {
        item=1;
        for(j=1;j<=i;j++)
            item=item*j;
        sum=sum+item;
    }
    printf("1!+2!+3!+...+100!=%e\n",sum);
    return 0;
}
