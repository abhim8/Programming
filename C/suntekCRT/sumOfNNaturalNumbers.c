#include <stdio.h>
int main() {
	int n,sum;
	printf("Enter a Number: ");
	scanf("%d",&n);
	if(n<=0) printf("\nInvalid!!");
	else{
		sum = n*(n+1)/2;
		printf("\nSum = %d\n",sum);
	}
	return 0;
}