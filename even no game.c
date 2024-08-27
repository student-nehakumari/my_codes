#include<stdio.h>
int main()
{
    int x,i;
    for(i=1;i<=3;i++)
    {
        printf("enter a odd no.");
        scanf("%d",&x);
        if(x%2)
        break;
    }
    if(i==4)
    printf("game over");
    else
    printf("you win");
}