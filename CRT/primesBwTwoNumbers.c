#include<stdio.h>
int main(){

    int n1, n2, flag;
    printf("Enter Two Numbers: ");
    scanf("%d %d", &n1, &n2);
    if(n1==0 || n2==0){ printf("0-Error!! "); }
    for (int i=n1; i<=n2; i++){
        if(i==1) continue;
        flag=1;
        for(int j=2; j<=i/2; j++){
            if(i%j==0){
                flag=0;
                break;
            }
        }
        if(flag==1)
            printf("%d ", i);
    }
    
    return 0;
}