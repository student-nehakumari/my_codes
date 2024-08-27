#include<stdio.h>
int main()
{
    int n,k;
    printf("enter a no.");
    scanf("%d",&n);
    k=sum(n);
    printf("%d",k);
}
int sum(int r)
{
    int s;
    if(r==0)
    return(0);
    s=r%10+sum(r/10);
    return(s);
}