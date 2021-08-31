#include<stdio.h>
 void main(){
     int n,i,j,count;
     printf("Enter any number: \n");
     scanf("%d",&n);
     printf("The prime numbers b/w 1 to %d\n",n);
     printf("PRIME NUMBERS IS : \n");
     for(i=1;i<=n;i++)
     {
         count=0;
         for(j=1;j<=i;j++)
         if(i%j==0)
        {
             count++;
        }
        if(count==2)
        {
             printf("%d\t",i);
        }
     }
     printf("\n");

     }

 