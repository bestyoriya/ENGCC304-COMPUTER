#include <stdio.h>
#include <string.h>

struct Employeedata {
	char name[100] ; //employee name
 	float salary ; //employee Salary(Bath)
 	int duration ; //employee Duration(Year)
}typedef workem ;

//prototype Function 
void Input_employee ( workem a[] , int c ) ; //collect data
void show_result ( workem a[], int c ); //show result or output

int main(){
	char choice = 'y' ; //decision string to increase employee or not
	int c = 0 ; // Number of employees
    workem a[100] ; // structure Array to collect employees data
	while(choice == 'y') {
		printf("Do you want to Enter Employee Information?(y/n) : " )	; 
	    scanf(" %c", &choice) ;
		switch(choice){
		 	case 'y':{ Input_employee (a,c) ; c++ ; 
			break ;
			}
		default : break ;
		}//end switch-case		
    }//end while
   show_result ( a,c ); //show output
   return 0 ; //return error
}//end main

void Input_employee ( workem a[] , int c ) {
    printf ( "Employee Name: " ) ;
    getchar() ; //read the input as an unsigned char
    gets (a[c].name) ; //input employee's name 
    printf ( "Salary (Bath/Month): " ) ;
    scanf ("%f",&a[c].salary) ; //input employee's salary
    printf ( "Duration (Year): " ) ;
    scanf ("%d",&a[c].duration) ; //input employee's duration
}//end Input_employee

void show_result ( workem a[], int c ) {
    int j = 0 , k = 0 ; // loop control
    float sum = 0 ; //summary  salary the all employees
    int high ; //duration holding
    float highsalary = -99999999 ; //salary holding
    while ( j<c ) {
        sum = sum + a[j].salary ; //summary process
        j++  ;
    }//end while
    printf ( "Average of Salary: %.2f Bath\n ", sum/c ) ; //output Average of all salary
    printf ( "Payment of every month: %.2f Bath\n ", sum ) ; //output Paymentall of all salary
    printf ( "**Most Salary in this business**\n" ) ; //output **Most Salary in this business**
    while ( k<c ) {
        switch ( a[k].salary>highsalary ) {
            case 1 : highsalary = a[k].salary ; high = k ;
            break;
        }
		k++ ;
    }//end while
    printf ( " Name : %s (%d years)\n" , a[high].name, a[high].duration ) ; //output name and duration of employee
    printf ( " Salary : %.2f (Bath)\n" , a[high].salary ) ; //output salary of employee
}//end show_result

