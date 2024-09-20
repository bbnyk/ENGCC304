#include <stdio.h>
#include <math.h>

//-----prototype-----
int calculate( int numholder ) ;
int check( int sum, int numholder ) ;

//-----main-----
int main() {
    int input ;

    printf( "Enter Number : " ) ;
    scanf( "%d", &input ) ;

    check( calculate( input ), input ) ;

    return 0 ;
}//end main function

//-----function-----
int calculate( int numholder ) {
    int num, singlenum, sum = 0, digit = 0 ;

    num = numholder ;

    while( num > 0 ) {
        num /= 10 ;
        digit ++ ;
    }//end while

    num = numholder ;

    while (num > 0) {
        singlenum = num % 10 ;
        sum += pow( singlenum, digit ) ;
        num /= 10 ;
    }//end while

    return sum ;
}//end calculate function

int check( int sum, int numholder ) {

    if ( sum == numholder ) {
        printf( "Pass." ) ;
    } else {
        printf( "Not Pass." ) ;
    }//end if else

    return 0 ;
}//end check function
