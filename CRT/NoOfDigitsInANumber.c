#include <stdio.h>
int main() {
	int n,cnt;
	printf("Enter a Number: "); scanf("%d",&n);
	if(n<=0) printf("\nInvalid!!");
	else{
		while(n!=0){
			n=n/10;
			cnt++;
		}
	}
	printf("\nNo of digits: %d\n",cnt);
	return 0;
}
