int input_data ( bir[] ) ; //collect data
void output_data ( bir[], int ) ; //show result or output
void maxmin_age  ( bir[], int ) ; //maxmin_age to structure

int main() {
	int  number ; //person's number
	bir person[100] ; // structure Array to collect Birthday data
	number = input_data ( person ) ; //input_data person
	output_data ( person, number ) ; //output_data person
	maxmin_age ( person, number ) ; //maxmin_age person
		
	return 0 ;
}//end funtion main

int input_data ( bir person[] ) {
	FILE *fpn ; //file reader
	char section[100] ; //person's section
	int number ; //person's number
	fpn = fopen( "a.txt" , "r" ) ; //read file
	if ( fpn == NULL ) {
		printf ( " Error in open file " ) ; 
	}//end if
	
	fscanf ( fpn, "%s\t%s\t\t%s\n", section, section, section ) ; //Created to read data from a file
	
	for ( int i = 0 ; i < 100 ; i++ ) {
		if ( fscanf( fpn, "%d\t%s\t\t%d-%d-%d\n" , &person[i].number, person[i].name, &person[i].years, &person[i].month, &person[i].day ) != EOF ) {
			number++ ;	
		}//end if
		else{
			break ;
		}//end else
	}//end for
	 
	fclose( fpn ) ; //end
	return number ; //return number of people
}//end funtion input_data

void output_data ( bir person[], int number ) {
	int sum = 0 ;
	for ( int i = 0 ; i < number ; i++ ) {
		person[i].dailylife = ( 2018 - person[i].years ) * 365 + ( 6 - person[i].month ) * 30 + ( 21 - person[i].day ) ;
		printf ( "%s %d Years, %d Months\n" , person[i].name, person[i].dailylife / 365 , (person[i].dailylife %365)/30 ) ;
    }//end for
}//end funtion output_data

void maxmin_age  ( bir person[], int number) {
	int max = -99999 ; //max values movement
	char *maxname ; //max name
	int *maxdailylife ; //max dailylife
	int min = 99999 ; //min values movement
	char *minname ; //min name
	int *mindailylife ; //min dailylife
	for ( int i = 0 ; i < number ; i++ ) {
		if ( person[i].dailylife > max ) {
			max = person[i].dailylife ;
			maxname = person[i].name ;
		}// end if
		if ( person[i].dailylife < min ) {
			min = person[i].dailylife ;
			minname = person[i].name ;
		}// end if
	}//end for
	printf ( "\n----\n" ) ;
	printf ( "Max : %s[%d Years, %d Months]\n" , maxname, max / 365 , ( max %365)/30 ) ;
	printf ( "Min : %s[%d Years, %d Months]" , minname, min / 365 , ( min %365)/30 ) ;
}//end funtion maxmin_age