#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char name[30];
    int count=0, i=0;
    printf("Enter name:");
    gets(name);
    while(name[i]!='\0')
    {
        count++;
        i++;
    }
    ///count=strlen(name);
    printf("string length is:%d", count);
}