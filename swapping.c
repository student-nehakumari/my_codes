#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("enter two no.\n");
    scanf("%d %d",&a,&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d",a,b);
   
}