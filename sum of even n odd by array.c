#include<stdio.h>
int main()
{
    int a[10],i,sum_even=0,sum_odd=0;
    printf("enter 10 n0.");
    for(i=0;i<=9;i++)
    scanf("%d",&a[i]);
    for(i=0;i<=9;i++)
    {
        if(a[i]%2==0)
        sum_even=sum_even+a[i];
        else
        sum_odd=sum_odd+a[i];
    }
    printf("%d is sum of even\n",sum_even);
    printf("%d is sum of odd",sum_odd);
}