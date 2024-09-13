#include <stdio.h>
int main () {

    int i, a[100], N, q ;
    printf( "Enter N : " ) ;
    scanf( "%d", &N ) ;

    for( i = 0 ; i < N ; i ++ ) {
        printf( "Enter value[%d] : ", i ) ;
        scanf( "%d", &a[i] ) ;
    }//end for

    printf( "Index:" ) ;
    for( i = 0 ; i < N ; i ++ ) {
        printf( "%4d", i ) ;
    }//end for

    printf( "\nArray:" ) ;
    for( i = 0 ; i < N ; i ++ ) {
        for ( q = 2 ; q <= a[i] ; q ++ ) {
            if( a[i] % q == 0 ) {
                break ;
            }//end if
        }//end for

        if ( q == a[i] ) {
            printf( "%4d", a[i] ) ;
        } else {
            printf( "   #" ) ;
        }//end if else
    }//end for

    return 0 ;
}//end main function