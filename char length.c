#include<stdio.h>
#include<conio.h>
int main()
{
    char str[10]={'b','h','o','p','a','l'};
    int i;
    for(i=0;str[i];i++);
    printf("length is %d",i);
    getch();
}