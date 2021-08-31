#include <stdio.h>
#include<math.h>
void main()
{
	int x,n,sum=1,i;
	
	printf("\n Enter the Value of x : ");
	scanf("%d", &x);
	printf("\n Enter the number of terms : ");
	scanf("%d", &n);
	
	for (i=1;i<=n;i++)
	{
	  sum =sum+pow(x,i);
	}
    printf("The sum of this geometric progression: 1+x+x^2+x^3+.......+x^n=%d\n",sum);
}
