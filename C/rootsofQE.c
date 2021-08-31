#include<stdio.h>
#include<math.h>
int main(){
float a,b,c,d,root1,root2;
printf("Enter the values of a,b,c:\n");
scanf("%f%f%f",&a,&b,&c);
if(a==0||b==0||c==0)
printf("\n Error roots can't be determined ");
else
{
    d=(b*b)-4*a*c;
    if(d>0.00)
    {
        printf("\n Roots are real & distinct");
        root1=-b+sqrt(d)/(2.0*a);
        root2=-b-sqrt(d)/(2.0*a);
        printf("Root1 = %f \n Root2 = %f\n",root1,root2); 
    }
        if(d<0.00)
    {
        printf("\n Roots are Imaginary\n");
        root1=-b/(2.0*a);
        root2=sqrt(abs(d))/(2.0*a);
        printf("Root1 = %f+i%f \n Root2 = %f-i%f\n",root1,root2); 
    }
        if(d==0.00)
    {
        printf("\n Roots are real & equal"); 
        root1=-b/(2.0*a);
        root2=root1;
        printf("Root1 = %f \n Root2 = %f\n",root1,root2); 
    }
}
return 0;
}