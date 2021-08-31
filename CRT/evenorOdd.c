#include<stdio.h>  
#include<conio.h>  
int main(){   
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    a & 1 ? printf("\nnumber is Odd\n") : printf("\nnumber is Even\n");
    getch();
    return 0;  
}  