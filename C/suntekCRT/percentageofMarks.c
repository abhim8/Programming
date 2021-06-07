#include<stdio.h>

int main(int argc, char const *argv[]){
    int s1,s2,s3,s4,s5,sum=0,total=500;
    float percentage;
    printf("Enter Marks of 5 subjects: ");
    scanf("%d %d %d %d %d",&s1, &s2, &s3, &s4, &s5);
    sum = s1+s2+s3+s4+s5;
    percentage = (sum* 100) / total ;
    printf("Percentage of marks(%d) = %f",sum,percentage);

    return 0;
}
