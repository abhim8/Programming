#include<stdio.h>

int main(){
    int a[4][4]= { {1,2,3,4}, 
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16} };
    
    printf("Enter index of row & coloumn: ");
    
    int p,q;
    int numrows=4,numcols=4;
    scanf("%d %d",&p,&q);

    for (int r = 0; r < numrows; r++) 
    {
      for (int c = 0; c < numcols; c++) 
      {
          if (r >= p && c >= q && 
             (c == q || c == numcols - 1 || r == p || r == numrows - 1)){
             printf("%d ",a[r][c]);
          }
          else {
             printf("  ");
          }
       }
       printf("\n");
   }
   
   return 0;

}