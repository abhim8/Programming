#include<stdio.h>
int main(){

    int n;
    printf("Enter Size: ");
    scanf("%d", &n);
    int a[n], maxEle=0;
    printf("Enter Array Elements: ");
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
        if(a[i]>maxEle){ maxEle = a[i]; }
    }
    printf("Large Element is: %d\n", maxEle);
    return 0;
}