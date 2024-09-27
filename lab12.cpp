#include <stdio.h>

//----STRUCTURE----
struct Student {
    char Name[20] ;
    char ID[5] ;
    float ScoreSub1 ;
    float ScoreSub2 ;
    float ScoreSub3 ;
    float ScoreSub4 ;
    float ScoreSub5 ;
} typedef S ;

//----PROTOTYPE----
void input( S *holder ) ;
void output( S *holder ) ;
void grade( float score ) ;

//----MAIN----
int main () {
    
    S person[3] ;

    printf( "\nEnter the details of 3 students :\n" ) ;

    input( person ) ;

    printf( "\n==================\n" ) ;
    printf( "Student Details :\n" ) ;

    output( person ) ;

    return 0 ;
}//end main function

//----FUNCTION----
void input( S *holder ) {

    for( int i = 0 ; i < 3 ; i ++ ) {

        printf( "\nStudent %d:\n", i + 1 ) ;
        
        printf( "Name: " ) ;
        gets( holder[i].Name ) ; 
        
        printf( "ID: " ) ;
        scanf( " %s", holder[i].ID ) ; 
        
        printf( "Scores in Subject 1: " ) ;
        scanf( "%f", &holder[i].ScoreSub1 ) ; 
        
        printf( "Scores in Subject 2: " ) ; 
        scanf( "%f", &holder[i].ScoreSub2 ) ; 
        
        printf( "Scores in Subject 3: " ) ;
        scanf( "%f", &holder[i].ScoreSub3 ) ; 
        
        printf( "Scores in Subject 4: " ) ;
        scanf( "%f", &holder[i].ScoreSub4 ) ; 
        
        printf( "Scores in Subject 5: " ) ; 
        scanf( "%f", &holder[i].ScoreSub5 ) ; 

        getchar() ;
    }//end for
}//end input function

void output( S *holder ) {

    for( int i = 0 ; i < 3 ; i ++ ) {

        printf( "\nStudent %d:\n", i + 1 ) ;
        
        printf( "Name: %s\n", holder[i].Name ) ;
        
        printf( "ID: %s\n", holder[i].ID ) ;

        printf( "Scores:%3.0f%3.0f%3.0f%3.0f%3.0f\n", holder[i].ScoreSub1, holder[i].ScoreSub2, holder[i].ScoreSub3, holder[i].ScoreSub4, holder[i].ScoreSub5 ) ;

        printf( "Grades:" ) ;

        grade( holder[i].ScoreSub1 ) ;
        grade( holder[i].ScoreSub2 ) ;
        grade( holder[i].ScoreSub3 ) ;
        grade( holder[i].ScoreSub4 ) ;
        grade( holder[i].ScoreSub5 ) ;

        printf( "\nAverage Scores: %.1f\n", ( holder[i].ScoreSub1 + holder[i].ScoreSub2 + holder[i].ScoreSub3 + holder[i].ScoreSub4 + holder[i].ScoreSub5 ) / 5 ) ;
    }//end for
}//end output function

void grade( float score ) {

    if( score >= 80 ) {
        printf( "  A" ) ;
    } else if( score >= 75 && score < 80 ) {
        printf( " B+" ) ;
    } else if( score >= 70 && score < 75 ) {
        printf( "  B" ) ;
     } else if( score >= 65 && score < 70 ) {
        printf( " C+" ) ;
    } else if( score >= 60 && score < 65 ) {
        printf( "  C" ) ;
    } else if( score >= 55 && score < 60 ) {
        printf( " D+" ) ;
    } else if( score >= 50 && score < 55 ) {
        printf( "  D" ) ;
    } else {
        printf( "  F" ) ;
    }//end if else
}//end grade function