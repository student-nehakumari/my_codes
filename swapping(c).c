#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c;
    printf("enter two no.\n");
    scanf("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf("%d %d",a,b);
   
}
    