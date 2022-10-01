#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int fly=0;
    char s1[]="Hello";
    char s2[]="Hi";
    int flag=0;
    int i;
    for(i=0; s1[i]=='\0' && s2[i]=='\0'; i++)
    {
        if(s1[i]== s2[i])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        {
            printf("same");
        }
        else
        printf("not same");
}