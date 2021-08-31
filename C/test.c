#include<stdio.h>

float sum(int x, int y){
    float add = x+y;
    return add;
}

void main(){
    
    
    float a=4.2,b=9.6;
    float res;
    res = sum(a,b);
    printf("sum = %f\n",res);

}