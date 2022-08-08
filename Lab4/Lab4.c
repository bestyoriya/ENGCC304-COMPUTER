#include <stdio.h>

int main(){   
    char   ID[10] = "" ;
    int    WorkingHrs ;
    float  Amount ;
    float  salary ;
  
    printf( "Input the Employees ID (Max. 10 chars) : " ) ;
    scanf( "%s", &ID ) ;
    printf( "Input the Working hrs : " ) ;
    scanf( "%d", &WorkingHrs ) ;
    printf( "Salary amount/hr (Bath) : " ) ;
    scanf( "%f", &salary ) ;
    printf( "--\nExpected Output :\n" ) ;
    printf( "Employees ID = %s\n", ID ) ;
    Amount = salary*WorkingHrs ;
    printf( "Amount/day = %.2f Bath(s)", Amount) ;

  return 0 ;
  }//end function 