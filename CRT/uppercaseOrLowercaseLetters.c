#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
	
    char c; scanf("%c",&c);
    if(c=='u' || c=='U'){
        char ch = 'A';
        for(int i=1; i<=26; i++){
            printf("%c",ch++);
        }
    }
    else if(c=='l' || c=='L'){
        char ch = 'a';
        for(int i=1; i<=26; i++){
            printf("%c",ch++);
        }
    }
    else printf("Error! enter only u/U or l/L\n");
    
	return 0;
}
