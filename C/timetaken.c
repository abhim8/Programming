#include<stdio.h>
#include<math.h>
void main(){
    int floor=10,h=3,u=0,s=0;
    float a=9.8,t=0,temp,d;
    s=floor*h;
    d=u*t;
    temp=(2*s-d)/a;
    t=sqrt(temp);
    printf("Time taken to reach gorund= %f sec",t);

}