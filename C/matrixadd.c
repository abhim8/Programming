#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],c[50][50],i,j,m,n;
    printf("Enter no.of Rows & Coloumns \n");
    scanf("%d %d",&m,&n);

    printf("Enter first matrix\n");
    for ( i = 0; i < m; i++)
      for (j=0; j < n; j++)
       scanf("%d",&a[i][j]);
    printf("Enter second matrix\n");
    for ( i = 0; i < m; i++)
      for (j=0; j < n; j++)
       scanf("%d",&b[i][j]);
      for ( i = 0; i < m; i++)
      for (j=0; j < n; j++)
       c[i][j]=a[i][j]+b[i][j];

       printf("\n Matrix after addition : \n");
      for ( i = 0; i < m; i++)
      { 
        for (j=0; j < n; j++)
        {
          printf("%d\t",c[i][j]);
        }
         printf("\n");
      }
}