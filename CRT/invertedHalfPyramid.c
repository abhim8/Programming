#include<stdio.h>
int main(){
    int n,i,j,k;
    printf("Enter a Number: ");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        for(j=n; j>i; j--){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}