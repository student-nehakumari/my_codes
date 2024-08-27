#include<stdio.h>
struct date
{
    int d,m,y;
};
void main()
{
    struct date today,d1;
    today.d=21;
    today.m=12;
    today.y=2022;
    d1=today;
    printf("%d/%d/%d",today.d,today.m,today.y);
    printf("enter todays date\n");
    scanf("%d/%d/%d",&today.d,&today.m,&today.y);
    printf("%d/%d/%d",today.d,today.m,today.y);

}