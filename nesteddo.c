#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1, j=3;
do
{
   do
   {
    printf("%d",j);
    j--;
   } while (j>0/* condition */);
   i++;
   printf("%d",i);
} while (i<4/* condition */);
}
