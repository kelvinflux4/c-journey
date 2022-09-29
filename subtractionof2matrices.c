#include<stdio.h>
#include<conio.h>
void main()
{
    int a[2][3],b[2][3],c[2][3],j,i;
    printf("enter element of matrix a:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
      printf("enter element of matrix b");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }
    printf("the first matrix:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("the third matrix:\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            c[i][j]=a[i][j]-b[i][j];
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }
}