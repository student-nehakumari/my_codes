#include<stdio.h>
int fib(int);
int main()
{
    int i,n;
    printf("enter no. of terms");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    printf("%d  ",fib(i));
}
int fib(int r)
{
    if(r==1||r==2)
    return(1);
    else
    return(fib(r-1)+fib(r-2));
}