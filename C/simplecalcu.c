#include<stdio.h>
void main(){
    char ch;
    int a,b,c;
    printf("Enter your operator\n");
    scanf("%c",&ch);
    printf("Enter any two numbers\n");
    scanf("%d %d",&a,&b);
    switch(ch)
    {
        case '+':c=a+b;
        printf("Addition is = %d\n",c);
        break;
        case '-':c=a-b;
        printf("Subtaction is = %d\n",c);
        break;
        case '*':c=a*b;
        printf("Multiplication is = %d\n",c);
        break;
        case '/':c=a/b;
        printf("Quotient is = %d\n",c);
        break;
        case '%':c=a%b;
        printf("Remainder is = %d\n",c);
        break;
        default:
        printf("\n INVALID OPERATOR\n");
        break;
    }
}