#include<math.h>
#include<stdio.h>
int main()
{
    int a,n1,n2;
    printf("give the two no. of exponential function");
    scanf("%d %d",&n1,&n2);
    a=pow(n1,n2);
    printf("%d is the result of raise %d to power of %d",a,n1,n2);
}