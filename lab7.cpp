#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

    int play = 0 ;

    while(1) {

        int number = 0, i = 0, score = 100 ;
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
                    printf( "Sorry, the winning number is LOWER than %d (Score = %d)\n\n", i, score -= 10 ) ;
                } else {
                    printf( "Sorry, the winning number is HIGHER than %d (Score = %d)\n\n", i, score -= 10 ) ;
                }
                if( score == 0 ){
                printf( "YOU LOSE the correct number is %d\n\n", number );
                break ;
                }
                i = 0 ;
                printf( "Guess the winning number (1-100) : " ) ;
                scanf( "%d", &i ) ;
            }

            if( score != 0 ) {
            printf( "\nThat is correct! The winning number is %d\n", number ) ;
            printf( "Score this game: %d\n\n", score ) ;
            }
        } else if( play == -1 ) {
            return 0 ;
        } else {
            printf( "plese enter 1 or -1\n" ) ;
        }
    
    }
}