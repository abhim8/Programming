#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long digitsSum(long long num){    
    long long rem = 0, sum = 0;    
        
    while(num > 0){    
        rem = num % 10;    
        sum = sum + rem;    
        num = num / 10;    
    }    
    return sum;    
}

void solve(){
    long long n, temp;
    scanf("%lld",&n);
    temp = digitsSum(n);    
    
    if((n % temp) == 0){
        printf("1\n");    
    }
    else{
        printf("-1\n");
    }
}

int main(){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */       
    
    solve();
    return 0;
}