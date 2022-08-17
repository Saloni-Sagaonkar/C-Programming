/*
ASSIGNMENT 10

For this assignment we will represent a positive integer of maximum 10 digits in an one dimensional 
array. For example the number 56036 can be represented as follows:
0	0	0	0	0	5	6	0	3	6

You are going to write a program that will ask user to input a number in the following manner:

• Declare an integer array with 10 elements, initialize each element with 0.
• First prompt the user that they can input at most 10 digits number.
• Ask the user to input total number of digits in the number that they want to input, keep this in a 
variable n. If n is greater than 10 provide an error message and terminate the program.
• For valid n, run a loop to input each digit of the number one at a time, for the number 56036 
user will input 5 as the first digit, that you will need to keep at index 5 of the array, you need to 
do calculation for this start index. For example again, if the input number is of 4 digits then you 
need to start from index 6. Read one digit at a time and place that digit at appropriate index 
room of the integer one dimensional array that you already have declared with SIZE 10 in your 
main method.
• Once the input is complete print the number back to the console.

Now, once the input number is taken into the array, your program will ask the user to input a digit 
between 1 and 9 (both inclusive), if invalid input is there terminate the program giving error message. 
You will keep this in another integer variable d, not you need to add that digit with the number in the 
array. You need to start from index 9 and keep carry as necessary. Look into the following example: If we 
have 56036 in the array and user wants to add 7 with this, then first you would require to add 7 with 
digit 6 that yields 13, now replace index 9 with 3 and carry 1 to room with index 8 and add that carry 
with 3 there and that will become 4 and then the carry will be 0 and you stop iterating in the loop.

If you have a number all 9s in 10 digits, like 9999999999 and you are asked to add 1, then your array will 
contain 0000000000. Similarly for array with 9999999999 if you are asked to input 4 your array should 
contain: 0000000003, means if there is overflow coming out of index 0, just ignore that.

Please note that, after addition, there may be changes in the total number of digits.
0 1 2 3 4 5 6 7 8 9
0 0 0 0 0 5 6 0 3 6

Example execution of the program: 

Example Output - 1
	Please note that you can input at most 10 digit number
	What is the total number of digits in the number? 12
	Total digits can be > 0 and <=10 only

Example Output - 2
	Please note that you can input at most 10 digit number
	What is the total number of digits in the number? 4
	Input next digit: 1
	Input next digit: 2
	Input next digit: 3
	Input next digit: 4
	The number that you gave is: 1234
	Enter a digit >=1 and <=9 to add: 6
	Result:
	1240

Example Output - 3
	Please note that you can input at most 10 digit number
	What is the total number of digits in the number? 9
	Input next digit: 1
	Input next digit: 1
	Input next digit: 1
	Input next digit: 1
	Input next digit: 1
	Input next digit: 1
	Input next digit: 1
	Input next digit: 1
	Input next digit: 1
	The number that you gave is: 111111111
	Enter a digit >=1 and <=9 to add: 9
	Result:
	111111120

Example Output - 4
	Please note that you can input at most 10 digit number
	What is the total number of digits in the number? 6
	Input next digit: 9
	Input next digit: 9
	Input next digit: 9
	Input next digit: 9
	Input next digit: 9
	Input next digit: 9
	The number that you gave is: 999999
	Enter a digit >=1 and <=9 to add: 9
	Result:
	1000008

Example Output - 5
	Please note that you can input at most 10 digit number
	What is the total number of digits in the number? 2
	Input next digit: 9
	Input next digit: 7
	The number that you gave is: 97
	Enter a digit >=1 and <=9 to add: 10
	Invalid input, valid is from 1 to 9
*/

#include <stdio.h>
#include <math.h>

int main(){
    int arr[10] = {0};
    int carry=0, sum=0, count=0;
    int i;
   
    printf("Please note that you can input at most 10 digit number\n");
    printf("What is the total number of digits in the number? ");
    int n;
    scanf("%d", &n);

    if (n <= 0 || n > 10){
        printf("Total digits can be > 0 and <=10 only\n");
        return 0;
    }
    
    //assigning from right to left.
    for(i = 10-n; i < 10; ++i){
        printf("Input next digit: ");
        scanf("%d", &arr[i]);
    }
    
    printf("The number that you gave is: ");
    for(i = 10-n; i < 10; ++i){
        printf("%d", arr[i]);
    }
    printf("\n");
    
    // Now ask for the digit
    int d;
    printf("Enter a digit >=1 and <=9 to add: ");
    scanf("%d", &d);
    if (d <= 0 || d >= 10){
        printf("Invalid input, valid is from 1 to 9 ");
        return 0;
    }
    
    // now will do the addition:
    for(i = 9; i >= 0; --i){
        if (i == 9){
            sum = arr[i]  + d;
        }
        else{
            sum = arr[i] + carry;
        }
        
        arr[i] = sum % 10;
        carry = sum / 10;
        if (carry == 0)
           break;
    }
    
 	// count of addition-digits required as there can be increase in number of digits
 	
    if (i == n || i >= 10-n)				//CASE-1 -> if i==n OR i >= MAX-n than count=n (addition-digits == input-number-digit )
        count = n;
    else if(i < 10 - n && arr[i]!=0){		//CASE-3 -> i < 10-n AND arr[i] != 0 (addition-digits > input-number-digits)
        count= n+1;
    }
    else{
        count = 10;							//CASE-4 -> i<0 (addition-digits == MAX )
    }
    
    // display the result
    printf("Result: \n");
    for(i = 10- count; i < 10; ++i){
        printf("%d", arr[i]);
    }
    
    return 0;
}

/*---------------------------------------------------TO UNDERSTAND-----------------------------------------------------------------------*/
#include <stdio.h>
#include <math.h>

int main(){
    int arr[10] = { 0, 0, 0, 0, 0, 0, 9, 9, 9, 8};
    int n= 4;
    int d = 3;
    int carry=0, sum=0, newCount=0;
    int i;
    
    for(i = 9; i >= 0; --i){
        if (i == 9){
            sum = arr[i]  + d;
        }
        else{
            sum = arr[i] + carry;
        }
        
        arr[i] = sum % 10;
        carry = sum / 10;
        if (carry == 0)
           break;
    }
 
    if (i == n || i >= 10-n)
        newCount = n;
    else if(i < 10 - n && arr[i]!=0){
        newCount= n+1;
    }
    else{
        newCount = 10;
    }

    printf("Result: ");
    for(i = 10-newCount; i < 10; ++i){
        printf("%d", arr[i]);				//Result: 10001
    }  
    return 0;
}
