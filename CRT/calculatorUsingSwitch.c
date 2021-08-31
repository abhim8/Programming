#include <stdio.h>
int main(){
	char c;
	int res,a,b;
	printf("Enter the operator(+,-,*,/): "); scanf("%c",&c);
	printf("\nEnter two numbers: "); scanf("%d %d",&a,&b);
	switch(c){
		case '+': res=a+b; break;
		case '-': res=a-b; break;
		case '*': res=a*b; break;
		case '/': res=a/b; break;
		default: printf("Try Again!!"); 
	}
	printf("\n%d %c %d = %d\n",a, c, b, res);
	return 0;
}
