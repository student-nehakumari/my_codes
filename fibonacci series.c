#include<stdio.h>
int main()
{
    int i,n,a=-1,b=1,c;
    printf("enter a no");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=a+b;
        printf("%d  ",c);
        a=b;
        b=c;
    }
}