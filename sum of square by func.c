void square1(void);
void square2(int);
int square3(void);
int square4(int);
#include<stdio.h>
int main()
{
   int a,k;
   printf("enter a no.");
   scanf("%d",&a);
   k=square4(a);
   printf("sum is %d",k);
   
}
/*tnrn*/
void square1()
{
    int i,n,s=0;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i*i;
    printf("sum is %d",s);
}
/*tsrn*/
void square2(int n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    s=s+i*i;
    printf("sum is %d",s);
}
/*tnrs*/
int square3()
{
    int i,n,s=0;
    printf("enter a no.");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    s=s+i*i;
    return(s);
}
/*tsrs*/
int square4(n)
{
    int i,s=0;
    for(i=1;i<=n;i++)
    s=s+i*i;
    return(s);
}
