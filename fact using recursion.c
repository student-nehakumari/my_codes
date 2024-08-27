#include<stdio.h>
int fact(int);
int main()
{
    int n,k;
    printf("enter a no.");
    scanf("%d",&n);
    k=fact(n);
    printf("factorial of %d is %d",n,k);
}
int fact(int i)
{
    int r;
    if(i>0)
    {
        r=i*fact(i-1);
        return(r);
    }
    else
    return(1);

}