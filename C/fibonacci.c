#include<stdio.h>
  void main(){
      int a=0,b=1,n=0,i,sum=0;
      printf("Enter the length of series : \n");
      scanf("%d",&n);
      printf("FIBONACCI SERIES :\n");
      printf("%d\t%d",a,b);
      for(i=2;i<n;i++)
      {
          sum=a+b;
          printf("\t%d",sum);
          a=b;
          b=sum;
      }
      printf("\n");
  }
