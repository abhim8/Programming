#include<stdio.h>
#include<math.h>
void main(){
    int n;
    float p,q,r,si=0,ci=0;
    printf("\n Enter principle : \n");
    scanf("%f",&p);
    printf("Enter the rate : \n");
    scanf("%f",&r);
    printf("Enter the period in year:\n");
    scanf("%d",&n);
    si=((p*r*n)/100);
    printf("SIMPLE INTEREST is %f\n",si);
    q=1+(r/100);
    ci=p*pow(q,n)-p;
    printf("COMPOUND INTEREST is %f\n",ci);
}