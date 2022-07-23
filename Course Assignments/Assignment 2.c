/**
Assignment 2
Instructions: 
Write a program that will input 3 integer values from user and then will 
display the average of them. You would require to declare 3 integer variables 
for holding the integers given by the users from keyboard and then you need 
another variable for holding the average. Decide by yourself about the datatype 
of the average variable.

Finally print the average into console using printf.
*/
#include <stdio.h>

int main()
{
	// complete the program as per instructions.
	
	int num1, num2, num3;
	double avg;
	
	printf("Enter first number: ");		
	scanf("%d", &num1);						
	printf("Enter second number: ");
	scanf("%d", &num2);						
	printf("Enter third number: ");
	scanf("%d", &num3);						
	
	avg = (double(num1 + num2 + num3))/ 3;
	printf("Average is: %lf", avg);
	
	return 0;
}

/*OUTPUT:
Enter first number: 1
Enter second number: 2
Enter third number: 5
Average is: 2.666667
*/