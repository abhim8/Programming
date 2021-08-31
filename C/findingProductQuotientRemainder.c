#include<stdio.h>
int main(){

    int n1, n2, product=0, quotient=0, remainder=0; 
    scanf("%d %d",&n1, &n2);
    product = n1 * n2; quotient = n1 / n2; remainder = n1 % n2;
    printf("Product=%d, Quotient=%d, Remainder=%d\n", product, quotient, remainder);
    return 0;
}

/* Product=8, Quotient=2, Remainder=0 */