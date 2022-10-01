#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int i, len1, len2;
    char s1[30]="jenny";
    char s2[7]="kelvin";
    //strcat(s1,s2);
    len1= strlen(s1);
    len2=strlen(s2);
    for(i=0; i<=len2; i++)
    {
        s1[len1+i]=s2[i];
    }
    printf("%s", s1);
}