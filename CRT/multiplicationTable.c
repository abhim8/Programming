#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	
    int n; scanf("%d",&n);
    if(n<0){exit(0);}
    for (int i=1; i<=10; i++){
        printf("%d x %d = %d\n",n, i, n*i);
    }
    
	return 0;
}
