#include<stdio.h>
#include<string.h>
int main()
{
    char s[15];
    int i,l;
    printf("enter a string\n");
    gets(s);
    l=strlen(s);
    for(i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            printf("not a palindrome");
            break;
        }
    }
    if(i==l/2)
    printf("palindrome");
}