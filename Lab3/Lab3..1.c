#include <stdio.h>

int main(){
    int     b ;
    float   c ;
    char    d ;

    printf( "Please enter value : " ) ;
    scanf( "%d %f %c", &b, &c, &d ) ;

    printf("%d %.2f %c", b, c, d ) ;

    return 0 ;
}//end function