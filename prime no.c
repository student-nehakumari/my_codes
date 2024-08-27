#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a no.");
    scanf("%d",&x);
    for(i=2;i<=x-1;i++)
    {
        if(x%i==0)
        break;
    }
    if(i==x)
    printf("prime no.");
    else
    printf("not prime");
    printf("\n");
    return 0;
}