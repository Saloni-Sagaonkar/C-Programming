/*Variables: 
A variable is a container (storage area) to hold data.
To indicate the storage area, each variable should be given a unique name (identifier). 
Variable names are just the symbolic representation of a memory location.

Variable Declaration: Announcing the properties of variable to the complier.
	
Variable Definition: Allocating memory to a variable.

Variable Initialization:Assigning the value to the variable at the time of declaration.

Constants :Constants are those values that cannot be changed during program execution.
*/
#include <stdio.h>

int main(){
	int myNum = 5;             		// myNum-> Variable of Integer type
	float myFloatNum = 5.99;   		// Floating point number
	char myLetter = 'D';      	 	// Character
	const double PI = 3.14;			// PI is a symbolic constant; its value cannot be changed

	// Print variables
	printf("%d\n", myNum);
	printf("%f\n", myFloatNum);
	printf("%c\n", myLetter);
	printf("%f\n",PI);
	
	int octVar = 015;				//octal starts with a 0
	int hexVar = 0x15;				//hexadecimal starts with a 0x
	
	printf("%o\n", octVar);
	printf("%x", hexVar);
	
	printf("%d\n", octVar);			//octal->decimal number
	printf("%d\n", hexVar);			//hexdecimal -> octal
	printf("%x\n", octVar);			//octal -> hexadecimal
	printf("%o\n", hexVar);			//hexadecimal -> octal
}

/*Output: 	5
			5.990000
			D
			3.140000
			15
			1513
			21
			d
			25
*/

/*------------------------------------------------------------------------------------------------------*/

/*Types of Variables:
1. Local variable
2. Global variable
3. Static variable
4. External variable
5. Automatic variable

*/