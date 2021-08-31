#include<stdio.h>

int main(){
    int a[4][4]= { {1,2,3,4}, 
                   {5,6,7,8},
                   {9,10,11,12},
                   {13,14,15,16} };
    
    int k,l,m,n,o,r;

    int temp[4][4] = {0};
    printf("Enter index of row & coloumn: ");
    
    int p,q;
    scanf("%d %d",&p,&q);

    for (int i = p; i < 4; i++)
    {
        for (int j = q; j < 4; j++)
        {
            temp[i][j] = a[i][j];
            // initial given index number to left_most number
        }
        k=i+1, l=4-q;

            for ( k; k <= l; k++)
            {
                temp[k][l] = a[k][l];
                //rightmost element to bottom 
            }
            m=k-1, n=l-1;

                for ( n; n >= q; n--)
                {
                    temp[m][n] = a[m][n];
                    //bottomright to left elements upto the coloumn index provided by user
                }
                o=m, r=q;

                    for ( o; o >= i+1; o--)
                    {
                        temp[o][r] = a[o][r];
                        //bottomleft to initial index element
                    }             
            break;
    }

    for (int i=0; i<4; i++){
        for (int j = 0; j<4 ; j++){

            //if the element is zero then priting a space else printing the number
            if ( temp[i][j]==0){
            printf(" ");
            }

            else{
                printf("%d ",temp[i][j]);
            }
            
        }
        printf("\n");
        
    }

    return 0;

}