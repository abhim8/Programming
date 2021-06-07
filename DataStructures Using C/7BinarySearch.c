#include<stdio.h>

void Bubblesort(int a[], int n){
    int i,j,temp;
    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++) {
            if(a[i]>a[j]) {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main() {
    int i, n, key, low, high, mid, a[20];
    printf("\n Enter the size of the array: ");
    scanf("%d",&n);
    printf("Enter the array elements: ");
    for(i = 0; i < n; i++)
        scanf("%d",&a[i]);
    
    Bubblesort(a,n);
    
    printf("Enter the key element: ");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    while(high >= low){
        mid = (low + high) / 2;
        if(key == a[mid])
            break;
        else{
            if(key > a[mid])
                low = mid + 1;
            else
                high = mid - 1;
        }
    }
    if(key == a[mid])
        printf("The key element is found at location %d", mid + 1);
    else
        printf("the key element is not found");
    
    return 0;
}
