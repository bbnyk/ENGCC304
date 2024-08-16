#include <stdio.h>
int main () {
    int number, column, row ;
    printf( "please enter number: " ) ;
    scanf( "%d", &number ) ;
    if( number %2 == 0 ){
        for( row = 1 ; row <= number ; row++ ){
            for( column = 1 ; column <= number ; column++ ){
                if( column == row ){
                    printf( "1" ) ;
                }else printf( "0" ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
    }else for( row = number ; row != 0 ; row-- ){
            for( column = 1 ; column <= number ; column++ ){
                if( column == row ){
                    printf( "1" ) ;
                }else printf( "0" ) ;
            }//end for
            printf( "\n" ) ;
        }//end for
    return 0 ;
}//end main function