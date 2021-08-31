#include<stdio.h>
void main(){
    int n,r,j;
    printf("Enter a number : \n Enter no.of rows: \n");
    scanf("%d\n%d",&n,&r);
    for(j=1;j<=r;j++)
    {
        printf("\n %d x %d = %d",n,j,n*j);
    }
    printf("\n");
}