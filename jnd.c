#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int value;
    char s1[]="Hello";
    char s2[]="welcome";
    value=strcmp(s1,s2);
    if(value==0)
    {
        printf("same");
    }
    else
    printf("not same\n");
    printf("%d\n", value);
}