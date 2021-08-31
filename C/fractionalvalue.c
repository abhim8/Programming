#include <stdio.h>
void main()
{
	float x,sum=1,t=1,d;
	int i,n;
	printf("\n Input the Value of x :");
	scanf("%f", &x);
	printf("\n Input the number of terms : ");
	scanf("%d", &n);
	for (i=1;i<n;i++)
    {
        d=(2*i)*(2*i-1);
        t=-t*x*x/d;
        sum=sum+t;
    }
    printf("\n The sum = %f \n value of x=%f\n",sum,x);
}
