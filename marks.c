#include<stdio.h>
int main()
{
    int a[10],i;
    for(i=0;i<=10;i++)
    {
    printf("\n enter marks %d  ",i+1);
    scanf("%d",&a[i]);
    }
    if(a[i]<35)
    {
    printf("%d",i);
    }

}