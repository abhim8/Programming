/* 
2.
Write a C program to calculate the compound interest.
    Example 
        Input: P=15000, R=2.5, T=2 
        Output: CI=15759.374023

*/
#include <stdio.h>
#include <math.h>
int main(){
    
    float P, R, T, res=0, temp=0, ci;
    printf("Principle: "); scanf("%f", &P);
    printf("Rate: "); scanf("%f", &R);
    printf("Time: "); scanf("%f", &T);
    temp = 1+(R/100);
    res = P * pow(temp, T) - P;
    // ci = P * pow((1 + R / 100), T) - P;
    printf("Compount Interest = %.6f\n",res); 
    // printf("Compount Interest = %f\n", ci);

    return 0;
}


