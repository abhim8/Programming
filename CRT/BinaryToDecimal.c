#include <stdio.h>
int main(void) {
	int num, r, base=1,dn=0; 
	scanf("%d",&num);
	while ( num > 0) {  
        r = num % 10; 
        dn = dn + r * base;  
        num = num / 10; 
        base = base * 2;  
    }
    printf ("decimal number: %d\n", dn);
	return 0;
}
