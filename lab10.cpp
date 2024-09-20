#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main () {

    char input[ 20 ] ;
    int length, i ;

    printf( "Enter word : " ) ;
    scanf( "%s", input ) ;
    length = strlen( input ) ;

    for( i = 0 ; i < length ; i ++ ) {
        if( tolower( input[ i ] ) != tolower( input[ length - i - 1 ] ) ) {
            break ;
        }//end if
    }//end for

    if( i == length ) {
        printf( "Pass." ) ;
    } else {
        printf( "Not Pass." ) ;
    }//end if else
    
    return 0 ;    
}//end main function