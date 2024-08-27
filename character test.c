#include<stdio.h>
#include<conio.h>
int main()
{
    int y;
    printf("enter a character\n");
    scanf("%c",&y);
    if(y>='A'&&y<='Z')
    printf("%c is upper case alphabet",y);
    else if(y>='a'&&y<='z')
    printf("%c is lower case alphabet",y);
    else if(y>='0'&&y<='9')
    printf("%c is digit",y);
    else
    printf("%c is a special character",y);
    getch();
}