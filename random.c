#include<stdio.h>
int main()
{
    int i,j;
    for(i=1,j=10;i<j;i++,j--)
    {
    if(i==j)
    break;
    printf("%d ",i+j);
    }
    return 0;
}