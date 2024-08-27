#include<stdio.h>
int main()
{
    int x,r,area,l,b,n1,n2,n3;
    float a,avg;
    while(1)
    {
        printf("\n1. area of circle");
        printf("\n2. area of rectangle");
        printf("\n3. average of three numbers");
        printf("\n4. exit");
        printf("\n enter your choice");
        scanf("%d",&x);
        switch(x)
        {
            case 1:
            printf("enter radius of circle");
            scanf("%d",&r);
            a=3.14*r*r;
            printf("%f",a);
            break;
            case 2:
            printf("enter length and breadth of rectangle");
            scanf("%d  %d",&l,&b);
            area=l*b;
            printf("%d",area);
            break;
            case 3:
            printf("enter three no.");
            scanf("%d  %d  %d",&n1,&n2,&n3);
            avg=(n1+n2+n3)/3.0;
            printf("%f",avg);
            break;
            case 4:
            exit(0);
            default:
            printf("invalid choice");
            

        }

    }
}