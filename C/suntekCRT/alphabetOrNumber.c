#include <stdio.h>
int main() {
	char c;
	printf("Enter a Character: ");	scanf("%c",&c);
	if((c>=97 && c<=122) || (c>=65 && c<=90))
		printf("\n%c is an Alphabet\n",c); 
	else 
		printf("\n%c is a Number\n",c);  
	return 0;
}
