#include<stdio.h>
int main()
{
    int n,f=1;
    printf("enter a no.");
    scanf("%d",&n);
    while(n>=1)
    {
        f=f*n;
        n--;
    }
    printf("factorial of %d is %d",n,f);
}