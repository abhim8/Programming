#include<stdio.h>
 
int main() {
   int radius;
   float PI = 3.14, area, circumference;
 
   printf("\nEnter radius of circle: ");
   scanf("%d", &radius);
 
//    area = PI * radius * radius;
//    printf("\nArea of circle : %f ", area);
 
   circumference = 2 * PI * radius;
   printf("\nCircumference : %f ", circumference);
 
   return (0);
}