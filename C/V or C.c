#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main(){
       /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    char ch[50];
    int strlength;

    printf("Enter any character: \n ");
    scanf("%s", &ch);
    strlength=sizeof(ch);
    printf("string length = %d \n",strlength);
    if (strlength>1){
        printf("Enter only one character");
        return 0;
    }

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
       ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
    {
        printf("vowel");
    }
    else if((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {

        printf("Consonant");
    }
    else
    {

        printf("not an alphabet");
    }

    return 0;
}
