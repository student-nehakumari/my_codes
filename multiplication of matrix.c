#include<stdio.h>
int main()
{
    int a[3][3],b[3][3],i,j,k,sum,c[3][3];
    printf("enter 9 n0. for matrix 1\n");
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=2;j++)
           scanf("%d",&a[i][j]);
    }      
    printf("enter 9 n0. for matrix 2\n");
    for(i=0;i<=2;i++)
    {
       for(j=0;j<=2;j++)
           scanf("%d",&b[i][j]);
    }   
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            sum=0;
            for(k=0;k<=2;k++)
            {
                sum=sum+a[i][k]*b[k][j];
            }
            c[i][j]=sum;
        }
        
    } 
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
         {
                printf("%d ",c[i][j]);
         }
          printf("\n");
    }    
}