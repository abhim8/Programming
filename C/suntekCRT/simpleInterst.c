#include<stdio.h>  
int main(){   
    float P , R , T , SI ;  
    printf("Enter Principal, Rate & Time(Years): ");
    scanf("%f %f %f",&P,&R,&T);
    SI = (P*R*T)/100;   
    printf("\n\n Simple Interest is : %f", SI);  

    return (0);  
}  