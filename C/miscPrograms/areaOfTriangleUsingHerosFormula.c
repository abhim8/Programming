#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, area, S;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f",&a, &b, &c);
    S = (a + b + c) / 2;
    area = sqrt(S*(S-a)*(S-b)*(S-c));
    printf("\nArea = %f",area);
    return 0;
}
// input 12 16 20
// output 96