#include <stdio.h>

int powerByNoOfDigits(int a, int b){
	int power = 1;
	while(b>0){
		power = power * a;
		b--;
	}
	return power;
}

void computeArmStrongNumbers(int n1, int n2){
    
    for (int i=n1+1; i<n2; i++){
        int temp=i, sum=0, countOfDigits=0;
        // counting no of digits
	    while(temp>0){    
		    temp = temp / 10;    
		    countOfDigits++;
	    }
        //calculating sum
        temp = i;
	    while (temp>0) {
            int lastDigit = temp % 10;
            sum += powerByNoOfDigits(lastDigit, countOfDigits);
            temp /= 10;
        }
	    if(sum==i) printf("%d ",i);    
	}
}

int main() {
    int n1, n2;    
    printf("Enter Two Numbers: ");
	scanf("%d %d",&n1, &n2);    
	if(n1<=0 || n2<=0){ 
		printf("Invalid numbers!!!\n"); 
	}

    computeArmStrongNumbers(n1, n2);

    return 0;
}
