#include <stdio.h>
int main(void) {
	int num, r, base=1; 
    long long bn = 0;
	scanf("%d",&num);
	while ( num!=0) {  
        r = num % 2; 
        bn = bn + r * base;  
        num = num / 2;
        base = base * 10;  
    }
    printf ("binary number: %lld\n", bn);
	return 0;
}
