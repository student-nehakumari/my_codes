#include<stdio.h>
int add(void);
void main()
{
    int s;
    s=add();
    printf("sum is %d",s);
}
int add()
{
    int a,b,c;
    printf("enter 2 no.");
    scanf("%d %d",&a,&b);
    c=a+b;
    return(c);
  
}