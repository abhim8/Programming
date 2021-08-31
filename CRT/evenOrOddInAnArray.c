#include<stdio.h>
int main(){

    int n;
    printf("Enter size: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    
    printf("\nEven numbers: ");
    for(int i=0; i<n; i++){
        if(a[i]%2==0) printf("%d ",a[i]);
    }
    printf("\nOdd numbers: ");
    for(int i=0; i<n; i++){
        if(a[i]%2!=0) printf("%d ",a[i]);
    }    
    printf("\n");
    return 0;
}

// (or another aproach)

//     int n;
//     printf("Enter size: ");
//     scanf("%d",&n);
//     int a[n], even[n], odd[n];
//     for (int i=0; i<n; i++){
//         scanf("%d",&a[i]);
//         even[i]=0; odd[i]=0;
//         if(a[i]%2==0){ even[i] = a[i]; }
//         else { odd[i] = a[i]; }
//     }
    
//     printf("\nEven numbers: ");
//     for(int i=0; i<n; i++){
//         if(even[i]!=0) printf("%d ",even[i]);
//     }
//     printf("\nOdd numbers: ");
//     for(int i=0; i<n; i++){
//         if(odd[i]!=0) printf("%d ",odd[i]);
//     }    
