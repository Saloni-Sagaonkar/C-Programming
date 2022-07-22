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

1. Local variable:
-	A variable which is declared inside function or block.
-	The scope is within a function in which they are declared.

2. Global variable:
-	A variable which is declared outside function or block.
-	The scope throughout the program. 
*/

#include <stdio.h>
int globalVar = 20;					//global variable
void function1()
{
	int localVar = 10;				//local variable
  	printf("%d\n" , localVar);
}
void function2()
{
  printf("%d\n" , globalVar);
}
int main() {
 
  function1();
  function2();
    return 0;
}
/*Output:
10
20
*/

/*
3. Static variable:
- Static variable retains its value within the function calls. 
- ‘static’ keyword is used to define a static variable
*/

#include <stdio.h>
void function(){ 
	int x = 20;					//local variable 
	static int y = 30;			//static variable 
	x = x + 10; 
	y = y + 10; 
	printf("\n%d,%d",x,y); 
} 
int main() {
 
  	function();
  	function();
  	function();
  	return 0;
}

/*Output:
30,40
30,50
30,60
*/

/*
4. Auto variable:
- Variables declared inside the block, are automatic variables by default.
- by default it will be initialized with some garbage (random) value
- Global variable by default initialize to 0
*/
#include <stdio.h>
void function()
{
  int x=10;				//local variable (also automatic) 
  auto int y=20;		//automatic variable
  printf("%d,%d",x,y);	//10,20
}
int main() {
 
    function();
    return 0;
}

/*
5. External Variable
- External variables can be shared between multiple C files. 
- We can declare an external variable using extern keyword.*/

//program.c
#include "myfile.h"
#include <stdio.h>  

extern int a;                           //global variable (also extern)
int main()
{
	printf("%d", a);             		//print from other file i.e. a= 5 
	return 0;
}

//myfile.h
int a = 5;



