#include <stdio.h>

void rectangle_pattern( int n, int a[][n], int row, int col )
{
    for ( int i = row; i < n; ++i )
    {
        if ( i == row || i == n - 1 )
        {
            for ( int j = col; j < n; j++ )
            {
                printf( "%2d ", a[i][j] );
            }
        }
        else
        {
            printf( "%2d", a[i][col] );
            if ( col != n - 1 ) printf( "%*d", ( int )( 3 * ( n - col - 1 ) ), a[i][n-1] );
        }
        printf("\n");
    }
}

int main(void) 
{
    enum { N = 4 };
    int a[N][N]= 
    { 
        {  1,  2,  3,  4 },
        {  5,  6,  7,  8 }, 
        {  9, 10, 11, 12 }, 
        { 13, 14, 15, 16 } 
    };

    int row = 0, col = 0;
    
    rectangle_pattern( N, a, row, col );
    
    printf("\n");
    
    row = 0, col = 1;
    
    rectangle_pattern( N, a, row, col );
    
    printf("\n");

    row = 0, col = 2;
    
    rectangle_pattern( N, a, row, col );
    
    printf("\n");

    row = 0, col = 3;
    
    rectangle_pattern( N, a, row, col );
    
    printf("\n");

    return 0;
}