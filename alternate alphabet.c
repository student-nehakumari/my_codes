#include<stdio.h>
int main()
{
    int i,j;
    char k;
    for(i=1;i<=4;i++)
    {
        k='A';
        fOR(j=1;j<=7;j++)
        {
            if(j<=i&&j<=8-i)
            {
                printf("%c",k);
                j<4?k++:k--;
            }
            else
            {
                printf(" ");
            }
        }
    }
    printf("\n");
}
