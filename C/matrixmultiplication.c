#include<stdio.h>
void main()
{
    int a[50][50],b[50][50],c[50][50],i,j,m,n,p,q,k;

    printf("Enter no.of Rows & Coloumns of first matix \n");
    scanf("%d %d",&m,&n);
    
    printf("Enter no.of Rows & Coloumns of second matix \n");
    scanf("%d %d",&p,&q);

    if(n==p)
     {
         printf("Enter first matrix\n");
    for ( i = 0; i < m; i++)
      for (j=0; j < n; j++)
       scanf("%d",&a[i][j]);
    printf("Enter second matrix\n");
    for ( i = 0; i < m; i++)
      for (j=0; j < n; j++)
       scanf("%d",&b[i][j]);
       printf("Matrix multiplication is : \n");
       for(i=0;i<m;i++)
     {
         for(j=0;j<n;j++)
         {
             c[i][j]=0;
             for (k=0;k <n;k++)
             c[i][j]=c[i][j]+(a[i][j]*b[i][j]);
             printf("%d\t",c[i][j]);
         }
         printf("\n");
     }
     }
     else
     printf("Sorry!! Matrix multiplication can't be done.");
    


}