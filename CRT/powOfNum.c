#include <stdio.h>

int main() {
    int b, e, power=1; 
    scanf("%d %d",&b, &e);
	for (int i = 1; i <= e; ++i) {
		power = power * b;
	}
	return 0;
}