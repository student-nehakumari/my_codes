#include<stdio.h>
int main()
{
    int a[3],b[3],c[3],i,j;
    printf("enter 9 no. for 1st matrix");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        scanf("%d",&a[i][j]);
    }
     printf("enter 9 no. for 2nd matrix");
     for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
        scanf("%d",&b[i] [j]);
     }
    for(i=0;i<=2;i++)
     {
        for(j=0;j<=2;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            printf("%d,c[i][j]");

        }
       
     }
     printf("\n");

}