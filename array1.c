#include<stdio.h>
#include<conio.h>
void main()
{
    int a[5], i;
    printf("enter the array elements\n:");
    for( i=0; i<5; i++)
        scanf("%d", &a[i]);
    for(i=0; i<5; i++)
        printf("array elements at index %d\n:", i, a[i]);
}