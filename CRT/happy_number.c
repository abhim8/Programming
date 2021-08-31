#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

long long powerAndSum(long long num){    
    long long rem = 0, sum = 0;    
        
    while(num > 0){    
        rem = num % 10;    
        sum = sum + (rem*rem);    
        num = num / 10;    
    }    
    return sum;    
}

void solve(){
    long long n, temp;
    scanf("%lld",&n);
    temp = n;
    while(temp != 1 && temp != 4){    
        temp = powerAndSum(temp);    
    }
    if(temp == 1){
        printf("1\n");    
    }else if(temp == 4){
        printf("-1\n");
    }
    else{
        printf("-1\n");
    }
}

int main(){
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */       

    long long t; 
    scanf("%lld",&t);
    while (t--){
        solve();
    }
    
    return 0;
}