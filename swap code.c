#include<stdio.h>
void swap(int *x,int *y)
{
    int z;
    z=*x;
    *x=*y;
    *y=z;
}

void main()
{
    int a,b;
    printf("enter 2 no.");
    scanf("%d %d",&a,&b);
    swap(&a,&b);
    printf("a=%d and b=%d",a,b);
}
