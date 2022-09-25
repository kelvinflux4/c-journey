#include<stdio.h>
#include<conio.h>
int main(void)
{
  int number, i, a;
  printf("Enter a number");
  scanf("%d", number);
    for(i=1; i<1024; i+3)
        {
            a= number*i;
            printf("%d",a);
        }
    printf("kelvin");
    getch();
}