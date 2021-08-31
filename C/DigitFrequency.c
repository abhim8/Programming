#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */       char str[1000];
    scanf("%s",str);
    int len = strlen(str);
    int digitOccuranceArray[10] = {0};
    for(int i=0; i<len; i++){
        if(str[i] == 48) { digitOccuranceArray[0]+=1; }      // 0
        else if(str[i] == 49) { digitOccuranceArray[1]+=1; } // 1
        else if(str[i] == 50) { digitOccuranceArray[2]+=1; } // 2
        else if(str[i] == 51) { digitOccuranceArray[3]+=1; } // 3
        else if(str[i] == 52) { digitOccuranceArray[4]+=1; } // 4
        else if(str[i] == 53) { digitOccuranceArray[5]+=1; } // 5
        else if(str[i] == 54) { digitOccuranceArray[6]+=1; } // 6
        else if(str[i] == 55) { digitOccuranceArray[7]+=1; } // 7
        else if(str[i] == 56) { digitOccuranceArray[8]+=1; } // 8 
        else if(str[i] == 57) { digitOccuranceArray[9]+=1; } // 9
    }
    
    for(int i=0; i<10; i++){
        printf("%d ", digitOccuranceArray[i]);
    }
    
    return 0;
}
