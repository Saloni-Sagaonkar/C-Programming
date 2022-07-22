/* C Programming - Introduction 

1. What is C
2. Why C is important
3. C’s features, pros, and cons
4. Features of C Programming
5. Applications of C Language

Theory: https://data-flair.training/blogs/c-tutorial/
*/

/*------------------------------------------------------------------------------------------------------*/

//Print "Hello, World!"

#include <stdio.h>                  //Header file

int main(){ 						//Entry point ->main function with integer return type
	printf("Hello, World!");        //print statement to display output on the screen
	return 0;						//Indicates that the main function returns null value
}

//Output: Hello, World!

/*
#include <stdio.h> – It includes a preprocessor command. 
                     By this command, we add all the files and content of stdio.h in the program.
*/

/*------------------------------------------------------------------------------------------------------*/

/*Keywords: 
A set of words used for a special purpose in the program. They are reserved words. 
Examples: for, while, switch, break, goto, etc.
*/

#include<stdio.h>  
int main(){
	for(int i=0;i<3;i++){
		printf("Welcome to C programming Language\n");
	}
	return 0;
};

/*------------------------------------------------------------------------------------------------------*/

/*Identifier:
It refers to name given to entities such as variables, functions, structures etc
*/

int money;				//int->keyword, money->Identifier(variable) of type integer
double accountBalance;	//accountBalance-> identifiers
