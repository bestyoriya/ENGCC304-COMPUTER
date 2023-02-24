#include<stdio.h>
#include<string.h>

struct employeedata { //structure of data per employee
	char name[100] ; // employee's name
	float salary ; //employee's salary(Bath)
	int duration ; //employee's duration(years)
} typedef worker ;

//prototype Function 
void control( char incworker[]) ; //To continue or end input
void inputdata( worker employ[], int workernumber ) ; // To collect data
void showallsalary( worker employ[], int workernumber ) ; //to show data or output

int main() {
	char incworker[2] = "y"; //decision string to increase employee or not
	int workernumber = 0 ;  // Number of employees
	worker employ[100] ; // structure Array to collect employees data
	while( incworker[0] == 'y') {
		control( incworker) ; 
		if (incworker[0] == 'y') { 
            inputdata( employ, workernumber) ; 
            workernumber++ ;
		}//end if
	}//end while
	showallsalary( employ, workernumber) ;//show output
	return 0 ;//return Error
}//End main

void control( char incworker[2] ) {
	printf("Do you want to Enter Employee Information? (y/n): ");
	scanf("%s", incworker) ;//choose route
}//end control

void inputdata( worker employ[100], int workernumber) {
	printf("Employee name: ") ;
	getchar(); //reads the input as an unsigned char
	gets(employ[workernumber].name) ; //input employee's name 
	printf("Salary (Bath/Month): ") ;
	scanf("%f", &employ[workernumber].salary) ; //input employee's salary
	printf("Duration (year): ") ;
	scanf("%d", &employ[workernumber].duration) ; //input employee's duration
}//end inputdata

void showallsalary( worker employ[100], int workernumber ) {
	int i = 0 , j = 0 ; // loop controller
	float sum = 0 ; //summary the salary of all employees
	char highname[100] ; //name holding
	int highdur ;//duration holding
	float highsalary = -99999999 ; //salary holding
	for( i=0 ; i < workernumber ; i++ ){
		sum = sum + employ[i].salary ; //summary process
	}//end while
	printf( "---------------------------------------------\n") ;
	printf( "Average of Salary : %.2f Bath\n", sum/workernumber) ; // output average salary
	printf( "Payment of every month : %.2f Bath\n" , sum) ; // output Paymentall of all salary
	for( j=0 ; j < workernumber; j++ ){ //finding the max of employee's duration process
		if ( employ[j].salary > highsalary ) {
			highsalary = employ[j].salary ;
			highdur = employ[j].duration ;
			strcpy( highname, employ[j].name ) ;
		}//end if
		 
	}// end while
	printf( "**Most Salary in this business **\n" );
	printf( "name : %s (%d Years)\n", highname, highdur) ; //output name and duration of employee
	printf( "Salary : %.2f Bath", highsalary ) ; //output salary of employee
}