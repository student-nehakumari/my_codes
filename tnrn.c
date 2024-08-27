#include<stdio.h>
void main()
{
    add();
}
void add()
{
    int a,b,c;
    printf("enter 2 no.");
    scanf("%d %d",&a,&b);
    c=a+b;
    printf("sum is %d",c);
}