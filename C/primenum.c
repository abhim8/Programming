#include<stdio.h>
#include<stdlib.h>
void main(){
    int n,i,c=0;
    printf("Enter an integer: \n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("Please enter only positive integers\n");
        exit (0);
    }

    for(i=2;i<=n/2;i++)
    {
        if (n%i==0)
        {
            c=1;
            break;
        }
    }
    if (c==0)
    printf("\n %d is a prime number.\n",n);
    else 
    printf("\n %d is not a prime number.\n",n);
}