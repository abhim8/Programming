#include<stdio.h>

int isPrime(int n){
    int flag = 1;
    for(int i = 2; i <= n/2; ++i){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(){
    int n;
    printf("Enter Number: ");
    scanf("%d",&n);
    int flag=0;
    printf("Given num: %d\n",n);
    for (int i=2; i<=n/2; i++){
        if(isPrime(i) == 1){
            if (isPrime(n-i) == 1){
                printf("Can be expressed as sum of primes %d + %d\n",i, n-i);
                flag=1;
                // break;
            }            
        }
    }
    if(flag==0) printf("Can't be expressed as sum of primes\n");
    return 0;
}