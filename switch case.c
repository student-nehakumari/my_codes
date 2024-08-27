#include<stdio.h>
int main()
{
    int x;
    printf("enter a no.");
    scanf("%d",&x);
    switch(x)
    {
        case 10:
        printf("A");
        case 47:
        printf("B");
        case 0:
        printf("c");
        case 15:
        printf("d");
        default:
        printf("default");
    }
}