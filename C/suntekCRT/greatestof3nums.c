#include<stdio.h>  
int main(){   
    int a,b,c;
    printf("Enter Three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("Greatest among three numbers is: %d", a>b ? ( a>c ? a : c) : ( b>c ? b : c));
    
    return 0;  
}  