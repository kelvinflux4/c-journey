#include<stdio.h>
#include<conio.h>
void main()
{
    char name[30];
    printf("enter string:");
    gets(name);
    //scanf("%s", &name);
    //printf("%.5s\n", name);
    //printf("%10.5s\n", name);
    printf("%s", &name[2]);
}