#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int noOfDigits(int n){
	int cnt = 0;
	while(n>0){    
		n = n / 10;    
		cnt++;
	} 
	return cnt;
}

int powerByNoOfDigits(int a, int b){
	int power = 1;
	
	while(b>0){
		power = power * a;
		b--;
	}
	return power;
}

int main() {
	
	/* Enter your code here. Read input from STDIN. Print output to STDOUT */    

    int n, lastDigit, sum=0, temp, countOfDigits=0;    
	scanf("%d",&n);    
	if(n<0)
        printf("-1\n");
	temp=n;
	countOfDigits = noOfDigits(n);
	while (n>0) {
        lastDigit = n % 10;
        sum += powerByNoOfDigits(lastDigit, countOfDigits);
        n = n / 10;
    }

	if(temp==sum)    
		printf("1\n");    
	else    
		printf("-1\n");  
    return 0;
}
