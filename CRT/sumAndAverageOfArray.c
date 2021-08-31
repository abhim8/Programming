#include<stdio.h>
int main(){
    int n; 
    printf("Enter Size: "); 
    scanf("%d",&n);
    int a[n], sum=0;
    double avg=0.0;
    for(int i=0; i<n; i++){ scanf("%d", &a[i]); sum+=a[i];}
    avg = sum / n;
    printf("Sum: %d\n Average: %.2f", sum, avg);
    return 0;
}