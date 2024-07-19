#include <stdio.h>

int main() {

    char employee_ID[10] ;
    int working_hrs ;
    int salary_per_hr ;
    float sum_salary ;

    printf( "Input the Employees ID(Max. 10 chars): " ) ;
    scanf( "%s", employee_ID ) ;
    printf( "Input the working hrs: " ) ;
    scanf( "%d", &working_hrs ) ;
    printf( "Salary amount/hr: " ) ;
    scanf( "%d", &salary_per_hr ) ;

    sum_salary = working_hrs * salary_per_hr ;

    printf( "\nEmployees ID = %s\n", employee_ID ) ;
    printf( "Salary = U$ %.2f", sum_salary ) ;

    return 0 ;

}//end main function