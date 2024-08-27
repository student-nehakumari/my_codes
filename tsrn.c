#include<stdio.h>
void main()
{
    int x,y;
    void add(int,int);
    printf("enter 2 no.");
    scanf("%d %d",&x,&y);
    add(x,y);
}
void add(int a,int b)
{
    int c;
    c=a+b;
    printf("sum is %d",c);
}