#include<stdio.h>
#include<math.h>
int main(){
    float distance;
    int x1, x2, y1, y2;
    printf("Enter the x and y coordinates of the first point: "); scanf("%d %d",&x1, &y1);
    printf("\nEnter the x and y coordinates of the second point: "); scanf("%d %d",&x2, &y2);
    distance = sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("\nDistance = %f", distance);
    return 0;
}
// input 
// 2 5
// 3 7
// output 2.236068