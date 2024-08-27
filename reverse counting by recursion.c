#include<stdio.h>
int main()
{
    int n;
    printf("enter a no.");
    scanf("%d",&n);
    reverse(n);
}
void reverse(int r)
{
    if(r>=1)
    printf("%d  ",r);
    reverse(r-1);
}