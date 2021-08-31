#include<stdio.h>
int main(){
    int n;
    printf("Enter Size: "); scanf("%d",&n);
    printf("Enter array elements: ");
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int *p = a;
    for(int i=0; i<n; i++){
        printf("Value in array: %d\n", *p);
        p++;
    }
    return 0;
}