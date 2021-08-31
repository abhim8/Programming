/* 
    Armstrong number is a number that is equal to the sum of cubes of its digits.
    For example 0, 1, 153, 370, 371 and 407 are the Armstrong numbers.
*/
#include <stdio.h>

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
	if(b<0) { 
		printf("Error!!, exponent is zero!\n"); 
		return;
	}
	while(b>0){
		power = power * a;
		b--;
	}
	return power;
}

int main() {
    int n, lastDigit, sum=0, temp, countOfDigits=0;    
	scanf("%d",&n);    
	if(n<=0){ 
		printf("Invalid number!!!\n"); 
		exit(0);
	}
	temp=n;
	countOfDigits = noOfDigits(n);
	while (n>0) {
        lastDigit = n % 10;
        sum += powerByNoOfDigits(lastDigit, countOfDigits);
        n = n / 10;
    }

	if(temp==sum)    
		printf("%d is an Armstrong  number\n",temp);    
	else    
		printf("%d is not an Armstrong number\n",temp);  
    return 0;
}
