/*
Assignment 4:
Download the attached starter file.
In this assignment you will write a program to generate electricity bill, when the program executes it will ask for the consumed unit (int) to input, 
once that is given by the user (who executes this program), then it will print the bill according to the following rule:

Unit Consumed      Rate ($ per unit)

<=100                    .2     

>100 and <=250     		.5

>250 and  <=500    		0.75

>500                     1.0

Please note that the rates are applied on slabs, that means for unit consumed of 300, first 100 units will be charges @$0.2, then next 150 units @$0.5, 
and rest of 50 units @0.75 

Questions for this assignment
Complete the program using the starter file electicbill.c (download this) and check the output with different units.

Expected output:

Execution 1

****** Welcome to the ABC Power Supply Company *******
Input Unit Consumed: -10
Unit consumed cannot be negative

Execution 2:

****** Welcome to the ABC Power Supply Company *******
Input Unit Consumed: 125
Total bill: $32.50 for 125 units
Thank you!

Execution 3:

****** Welcome to the ABC Power Supply Company *******
Input Unit Consumed: 320
Total bill: $147.50 for 320 units
Thank you!

Execution 4:

****** Welcome to the ABC Power Supply Company *******
Input Unit Consumed: 575
Total bill: $357.50 for 575 units
Thank you!
*/


#include <stdio.h>

int main(){
	int units;    // you need to input this	
	double bill_amount;  // you need to calculate this
	
	printf("****** Welcome to the ABC Power Supply Company *******\n");
	// prompt user to input unit consumed using printf and then
	// using scanf read the value into the unit variable.
	printf("Input Unit Consumed: ");
	scanf("%d", &units);

	// Now, use if-elseif to decide about rate
	if (units < 0){
		printf("Unit consumed cannot be negative\n");
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2;     // for this range 0.2 is the rate
	}
	else if(units >= 100 && units <= 250){  // >100 and <=250
		// please note that the bill must be calculated on slabs (see instructions)	
		bill_amount = (100*0.2) + (units-100) * 0.5;
	}
	else if(units >= 250 && units <= 500){  // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)
		bill_amount = (100*0.2) + ((250-100)*0.5 )+ (units-250) * 0.75;
	}
	else{		// for anything >500
		// please note that the bill must be calculated on slabs (see instructions)
		bill_amount = (100*0.2) + ((250-100)*0.5 )+ ((500-250)*0.75)+(units-500)*1.0;
	}
	
	// ** finally print the bill amount here, please note that if the unit consumed is 
	// invalid that is negative then no bill should be printed. **
	if (units >= 0){
		printf("Total bill: $%0.2lf for %d units\nThank you!", bill_amount, units);
	}
	return 0;
}



/*---------------------------------------Another Solution-------------------------------------------------------------*/

include <stdio.h>

int main(){
	int units;    // you need to input this	
	double bill_amount;  // you need to calculate this

	// prompt user to input unit consumed using printf and then
	// using scanf read the value into the unit variable.
	printf("****** Welcome to the ABC Power Supply Company *******\n");
	printf("Input Unit Consumed: ");
	scanf("%d", &units);

	// Now, use if-elseif to decide about rate
	if (units < 0){
		printf("Unit consumed cannot be negative\n");
	}
	else if(units >= 0 && units <= 100){
		bill_amount = units * 0.2;     // for this range 0.2 is the rate
	}
	else if(units > 100 && units <= 250){  // >100 and <=250
		// please note that the bill must be calculated on slabs (see instructions)	

		bill_amount = 0.2 * 100;   // this is for first 100 units
		// Now add the bill for 100 units with the rest of the bill for >100 units @0.5
		// the remaining units are (units - 100).		
		bill_amount = bill_amount + 0.5 * (units - 100);  
	}
	else if(units > 250 && units <= 500){  // >250 and  <=500
		// please note that the bill must be calculated on slabs (see instructions)
		bill_amount = 0.2 * 100;   // this is for first 100 units
		bill_amount = bill_amount + 150 * 0.5; // this is for next 150 units
		// now remaining units that is (units - 250) should be charged @0.75
		bill_amount = bill_amount + (units - 250) * 0.75;
	}
	else{		// for anything >500
		// please note that the bill must be calculated on slabs (see instructions)

		bill_amount = 0.2 * 100;   // this is for first 100 units
		bill_amount = bill_amount + 150 * 0.5; // this is for next 150 units		
		bill_amount = bill_amount + 250 * 0.75; // this is for next 250 units
		// now remaining units that is (units - 500) should be charged @1.0
		bill_amount = bill_amount + (units - 500) * 1.0;	

	}
	
	// finally print the bill amount here
	if (units >= 0){  // we should check for invalid units, if units is negative,
				// we must not print any bills.
		printf("Total bill: $%0.2lf for %d units\n", bill_amount, units);
		printf("Thank you!");
	}
	// Notice that I have used %0.2lf, now that will round off the value in 2 places 
	// after the decimal point, so to round off for 3 places you should use %0.3lf.
	
	return 0;
}