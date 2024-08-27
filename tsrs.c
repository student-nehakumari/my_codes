#include<stdio.h>
int add(int,int);
void main()
{
    int x,y,s;
    printf("enter 2 no.");
    scanf("%d %d",&x,&y);
    s=add(x,y);
    printf("sum is %d",s);
}
int add(int a,int b)
{
    int c;
    c=a+b;
    return(c);
  
}