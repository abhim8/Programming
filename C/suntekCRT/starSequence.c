/* 

1. Write a C program to print star sequence 
Example 
Input:  1 
Output: *
Input:  2
Output: *
        * *
Input:  3
Output: *
        * *
        * * *
*/
#include <stdio.h>
int main(){
    
    int n; scanf("%d", &n);
    for(int i=0; i<=n; i++){ 
        for(int j=0; j<i; j++){ printf("* "); }
        printf("\n");
    }
    return 0;
}

