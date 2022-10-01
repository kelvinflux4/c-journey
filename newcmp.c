#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int value;
    char s1[30], s2[30];
    printf("enter string1:");
    gets(s1);
    printf("enter string2:");
    gets(s2);
    value=strcmp(s1,s2);
    if(value==0)
    {
        printf("equal");
    }
    else
        printf("not equal");
}