/*Data types:
- Data types are declarations for variables. 
- This determines the type and size of data associated with variables. 

Common data types used in C:

- int: An int variable is used to store an integer.
- char: It stores a single character.
- float: It is used to store decimal numbers (numbers with floating point value) with single precision.
- double: It is used to store decimal numbers (numbers with floating point value) with double precision. 
- void: An incomplete type. It means "nothing" or "no type". You can think of void as absent.
	For example, if a function is not returning anything, its return type should be void.
	Note: Cannot create variables of void type.
	
Along with data types, comes modifiers. You can alter the data storage of a data type by using them:

- Signed: It is used to store zero, positive or negative values.
- Unsigned: It can store only zero or positive values.
- Long:  It is used to store large integer numbers. The size of the long type is 8 bytes.
- Short: It is used to store small integer numbers. Its size is of 2 Bytes.
*/

#include <stdio.h>
int main()
{
	int number1 = 400;
	short int number2 = 500;
	signed short int number3 = -600;
	long int number4 = 700;
	unsigned long int number5 = 800;
	unsigned long long int number6 = 900;
	char character1 ='A';
	signed char character2 ='B';
	unsigned char character3 ='C';
	float digit1 =20.00;
	double digit2 = 3.14159;
	long double digit3 = 1.414213;

	//Print statements to show the size of various data types
	printf("The size of int data type %d is: %lu bytes.\n", number1,sizeof(number1));
	printf("The size of short int data type %d is: %lu bytes.\n", number2,sizeof(number2));
	printf("The size of signed short int data type %d is: %lu bytes.\n", number3,sizeof(number3));
	printf("The size of long int data type %ld is: %lu bytes.\n", number4,sizeof(number4));
	printf("The size of unsigned long int data type %ld is: %lu bytes.\n", number5,sizeof(number5));
	printf("The size of unsigned long long int data type %lld is: %lu bytes.\n", number6,sizeof(number6));
	printf("The size of char %c is: %lu byte.\n", character1,sizeof(character1));
	printf("The size of signed char %c is: %lu byte.\n", character2,sizeof(character2));
	printf("The size of unsigned char %c is: %lu byte.\n", character3,sizeof(character3));
	printf("The size of float data type %f is: %ld bytes.\n", digit1,sizeof(digit1));
	printf("The size of double data type %lf is: %ld bytes.\n", digit2,sizeof(digit2));
	printf("The size of long double data type %Lf is: %ld bytes.\n", digit3,sizeof(digit3));
	return 0;    
}
/*Output:
The size of int data type 400 is: 4 bytes.
The size of short int data type 500 is: 2 bytes.
The size of signed short int data type -600 is: 2 bytes.
The size of long int data type 700 is: 8 bytes.
The size of unsigned long int data type 800 is: 8 bytes.
The size of unsigned long long int data type 900 is: 8 bytes.
The size of char A is: 1 byte.
The size of signed char B is: 1 byte.
The size of unsigned char C is: 1 byte.
The size of float data type 20.000000 is: 4 bytes.
The size of double data type 3.141590 is: 8 bytes.
The size of long double data type 1.414213 is: 16 bytes.
*/

/*------------------------------------------------------------------------------------------------------*/
/*
Derived Data Types:
They are derived from the fundamental data types in the form of a group to collect a cluster of data used as a single unit. 
These include:

- Arrays: A collection of data items of similar data types, which is accessed using a common name.
- Pointers: Pointers are basically variables that are used to store the memory address of another variable.
- Functions: It is a group of statements that are written to perform a specific task. 
			Functions are either user-defined or built-in library functions.
*/