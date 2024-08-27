#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("enter a no.\n");
    scanf("%d",&y);
    if(y%7==0||y%4==0)
    printf("%d is divisible by 7 or 4",y);
    else
    printf("%d is not divisible by 7 or 4 ",y);
    getch();
}