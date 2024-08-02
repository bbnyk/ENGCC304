#include <stdio.h>

int main () {

    int N ;
    int A ;

    printf( "Enter value : " ) ;
    scanf( "%d", &N ) ; 
    printf( "Series:" ) ;

    if ( N % 2 == 0) {
        for ( ; N >= 0 ; ) {
            printf( " %d ", N ) ;
            N -= 2 ;
        }// end for
    } else {
        for ( A = 1 ; A <= N ;  ) {
            printf( " %d ", A ) ;
            A += 2 ;
        }//end for
    }//end if else

    return 0 ;
}// end main function