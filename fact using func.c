#include<stdio.h>
int sum(int n);
int main()
{
    int x,N;
    printf("enter a no.");
    scanf("%d",&N);
    x=sum(N);
    printf("sum of %d is %d",N,x);
}
int sum(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    s=s+i;
    return(s);
}