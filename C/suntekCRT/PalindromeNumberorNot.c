#include <stdio.h>
int main()
{
	int res,n,rem=0,revNum=0,temp=0;
	printf("Enter a number: "); scanf("%d",&n);
	temp = n;
    while (n>0){
        rem = n%10;
        revNum = revNum * 10 + rem;
        n /= 10;
    }
    if(temp == revNum) printf("\n%d is a palindrome\n", temp);
    else printf("\n%d is not a palindrome\n", temp);
	return 0;
}
