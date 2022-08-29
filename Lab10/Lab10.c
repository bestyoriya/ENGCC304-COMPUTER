#include <stdio.h>
#include <string.h>
int main(){
  char Name[20] ;
  printf("----| Input :") ;
  scanf("%s", Name ) ; //gets(Name) ;
  printf("\n----| Input :")
  for(int i = strlen(Name); i >= 0 ; i--){
     printf("%c",Name[i]) ;
  } //end for
  return 0 ;
}//end function