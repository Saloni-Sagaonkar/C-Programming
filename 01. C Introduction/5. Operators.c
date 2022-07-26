/*Operators
An operator is a symbol that operates on a value or a variable. 
*/

// 1. Arithmetic Operators

#include<stdio.h>
	int main(){
	int a=10, b=7;

	printf("The Addition of %d and %d is: %d\n",a,b,a+b);
	printf("The Subtraction of %d and %d is: %d\n",a,b,a-b);
	printf("The Multiplication of %d and %d is: %d\n",a,b,a*b);
	printf("The Division of %d and %d is: %d\n",a,b,a/b);
	printf("The Modulus operation of %d and %d is: %d\n",a,b,a%b);
	printf("The Pre-Incremented value ++a is: %d\n",++a);    		//value of a is incremented by 1; then it returns the value.
	printf("The Post-Incremented value a++ is: %d\n",a++);			//original value of a is returned first; then a is incremented by 1.
	printf("The Pre-Decremented value --b is: %d\n",--b);
	printf("The Post-Decremented value b-- is: %d\n",b--);
	return 0;
}

/*OUTPUT:
The Addition of 10 and 7 is: 17
The Subtraction of 10 and 7 is: 3
The Multiplication of 10 and 7 is: 70
The Division of 10 and 7 is: 1
The Modulus operation of 10 and 7 is: 3
The Pre-Incremented value ++a is: 11
The Post-Incremented value a++ is: 11
The Pre-Decremented value --b is: 6
The Post-Decremented value b-- is: 6
*/

//2. Relational Operators

#include <stdio.h>
int main(){
	int a=10, b=10, c=20;

	printf("For %d == %d : The output is: %d \n", a, b, a == b); // condition is true
	printf("For %d == %d : The output is: %d \n", a, c, a == c); // condition is false

	printf("For %d != %d : The output is: %d \n", a, c, a != c); // condition is true
	printf("For %d != %d : The output is: %d \n", a, b, a != b); // condition is false

	printf("For %d > %d : The output is: %d \n", a, b, a > b);   // condition is false
	printf("For %d > %d : The output is: %d \n", a, c, a > c);   // condition is false

	printf("For %d < %d : The output is: %d \n", a, b, a < b);   // condition is false
	printf("For %d < %d : The output is: %d \n", a, c, a < c);   // condition is true

	printf("For %d >= %d : The output is: %d \n", a, b, a >= b); // condition is true
	printf("For %d >= %d : The output is: %d \n", a, c, a >= c); // condition is false

	printf("For %d <= %d : The output is: %d \n", a, b, a <= b); // condition is true
	printf("For %d <= %d : The output is: %d \n", a, c, a <= c); // condition is true
	return 0;
}
/*OUTPUT:
For 10 == 10 : The output is: 1
For 10 == 20 : The output is: 0
For 10 != 20 : The output is: 1
For 10 != 10 : The output is: 0
For 10 > 10 : The output is: 0
For 10 > 20 : The output is: 0
For 10 < 10 : The output is: 0
For 10 < 20 : The output is: 1
For 10 >= 10 : The output is: 1
For 10 >= 20 : The output is: 0
For 10 <= 10 : The output is: 1
For 10 <= 20 : The output is: 1
*/

//3. Logical Operators

#include <stdio.h>
int main(){
	int a = 10, b = 10, c = 20, answer;
	
	answer = (a == b) && (c > b);
	printf("For (%d == %d) && (%d != %d), the output is: %d \n",a,b,b,c,answer); //condition is true
	
	answer = (a == b) && (c < b) && (c>0);
	printf("For (%d == %d) && (%d <= %d), the output is: %d \n",a,b,b,c,answer); //condition is false
	
	answer = (a == b) || (b > c);
	printf("For (%d == %d) || (%d < %d), the output is: %d \n",a,b,c,b,answer);  //condition is true
	
	answer = (a != b) || (a <= b) || (a>c);
	printf("For (%d != %d) || (%d < %d), the output is: %d \n",a,b,c,b,answer);  //condition is true
	
	answer = !(a == b);
	printf("For !(%d == %d), the output is: %d \n",a,b,answer);                //condition is false
	 
	answer = !(a != b);
	printf("For !(%d == %d), the output is: %d \n",a,b,answer);                //condition is true
	return 0;
}

/*OUTPUT:
For (10 == 10) && (10 != 20), the output is: 1
For (10 == 10) && (10 <= 20), the output is: 0
For (10 == 10) || (20 < 10), the output is: 1
For (10 != 10) || (20 < 10), the output is: 1
For !(10 == 10), the output is: 0
For !(10 == 10), the output is: 1
*/

//4. Assignment Operators
#include<stdio.h>
	int main(){
	
	int number = 10, result;
	result = number;
	
	printf("result = %d \n", result);
	
	result += number; 					//Same as result = result + a
	printf("result = %d \n", result);
	
	result -= number; 					//Same as result = result - a
	printf("result = %d \n", result);
	
	result *= number; 					//Same as result = result * a
	printf("result = %d \n", result);
	
	result /= number; 					//Same as result = result / a
	printf("result = %d \n", result);
		
	result %= number; 					//Same as result = result % a
	printf("result = %d \n", result);
	return 0;
}

/*OUTPUT:
result = 10
result = 20
result = 10
result = 100
result = 10
result = 0
*/

//5. Bitwise Operators

#include <stdio.h>
int main(){
	
	int a = 26, b = 14;
	printf(" Bitwise AND operation %d & %d : %d\n",a,b,a&b);		
	printf(" Bitwise OR operation %d | %d : %d\n",a,b,a|b);
	printf(" Bitwise XOR operation %d ^ %d : %d\n",a,b,a^b);
	printf(" Bitwise ONE'S COMPLEMENT ~ %d operation : %d\n",a,~a);
	return 0;
}
/*
OUTPUT:
 Bitwise AND operation 26 & 14 : 10
 Bitwise OR operation 26 | 14 : 30
 Bitwise XOR operation 26 ^ 14 : 20
 Bitwise ONE'S COMPLEMENT ~ 26 operation : -27
 
 
Bitwise AND
a = 26 = 1 1 0 1 0
b = 14 = 0 1 1 1 0
________
a & b = 0 1 0 1 0 which is equal to 10

Bitwise OR
a = 26 = 1 1 0 1 0
b = 14 = 0 1 1 1 0
________
a | b = 1 1 1 1 0 which is equal to 30

Bitwise XOR
a = 26 = 1 1 0 1 0
b = 14 = 0 1 1 1 0
________
a ^ b = 1 0 1 0 0 which is equal to 20

Bitwise One’s Complement
a = 26 = 1 1 0 1 0

Reversing its bits, we get 0 0 1 0 1 which is equal to 5 but this is not the correct answer! 
The correct answer is: -(a+1) which is -27 which is in accordance with two’s complement.
*/

/*
6. Miscellaneous Operators

	sizeof – It returns the memory occupied by the particular data type of the operand
	& (Pointer) – It refers to the address (memory location) in which the operand is stored.
	*  (Pointer) –  It is a pointer operator
	? (Condition) – It is an alternative for if-else condition
*/

#include<stdio.h>
int main(){

	// Use of * and & operator
	int number = 10, *pointer;
	pointer=&number; 		//Here the pointer stores the memory address of variable number
	printf("The value of the number is: %d\n",*pointer);
	
	// Use of ?: operator
	int expression1 = 10, expression2 = 20, expression3;
	expression3 = ( expression1 > expression2 ) ? expression1 : expression2;
	printf("The Output of the ternary statement is: %d", expression3);
	return 0;
}

/*OUTPUT:
The value of the number is: 10
The Output of the ternary statement is: 20
*/
