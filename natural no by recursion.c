#include<stdio.h>
int main()
{
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    natural(n);
}
void natural(int r)
{
    if(r>=1)
    {
    natural(r-1);
    printf("%d ",r);
    }
}