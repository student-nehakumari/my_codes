#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter a number");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",2*n+1-2*i);
        i++;
    }
}