#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {

    while( 1 ) {

        int number = 0, i = 0, score = 100, play = 0, min = 0, max = 100 ;

        srand( time( NULL ) ) ;
        number = rand() % 100 + 1 ;

        printf( "Do you want to play game? (1=play,-1=exit) : " ) ;
        scanf( "%d", &play ) ;

        if( play == 1 ) {

            printf( "\n(Score = 100)\n" ) ;
            printf( "Guess the winning number (1-100) : " ) ;
            scanf( "%d", &i ) ;

            while( i != number ) {
            
                if( i > number ) {
                    if ( i < max ) {
                        max = i - 1 ;
                    }//end if
                    printf( "Sorry, the winning number is LOWER than %d (Score = %d)\n\n", i, score -= 10 ) ;
                } else {
                    if ( i > min ) {
                        min = i + 1 ;
                    }//end if
                    printf( "Sorry, the winning number is HIGHER than %d (Score = %d)\n\n", i, score -= 10 ) ;
                }//end if else

                if( score == 0 ) {
                    printf( "YOU LOSE the correct number is %d\n\n", number ) ;
                    break ;
                }//end if

                printf( "Guess the winning number (%d-%d) : ", min, max ) ;
                scanf( "%d", &i ) ;
            }//end while

            if( score != 0 ) {
                printf( "\nThat is CORRECT! The winning number is %d\n", number ) ;
                printf( "Score this game: %d\n\n", score ) ;
            }//end if

        } else if( play == -1 ) {
            break ;
        } else {
            printf( "plese enter 1 or -1\n\n" ) ;
        }//end if else

    }//end while
    return 0 ;
}//end main function
