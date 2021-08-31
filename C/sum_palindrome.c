#include<stdio.h>
void main(){
    int n,temp,r=0,sum=0,rev=0;
    printf("Enter an integer:\n");
    scanf("%d",&n);
    temp=n;
    do
    {
        r=n%10;
        sum=sum+r;
        rev=rev*10+r;
        n=n/10;
    }while(n>0);
    printf("\n Given number is %d",temp);
    printf("\n Sum of individual digits is %d",sum);
    printf("\n Its reverse is %d",rev);
    if(temp==rev)
    printf("\n %d Number is a palindrome.\n",temp);
    else
    printf("\n %d Number is a not a palindrome.\n",temp);    
    
}