#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("enter a no.\n");
    scanf("%d",&y);
    if(y%6)
    printf("%d is not divisible by both 2 and 3",y);
    else
    printf("%d is divisible by both 2 and 3",y);
    getch();
}