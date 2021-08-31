#include<stdio.h>
int main(){

    int n, *p;
    printf("Enter a number: ");
    scanf("%d",&n);
    p = &n;
    printf("Value in the Variable: %d\nAddress of Variable: %u", *p, p);
    // printf("\nAddress: %u", &n);

    return 0;
}