/*
Assignment- 9 to test your understanding with 1 dimensional Arrays

Please follow the instructions:
	1. In your main method declare 2 arrays that can each store a 
	maximum of 20 float elements.
	2. Prompt user to input some real numbers, read them in the first 
	array and count the total number of input given. Stop taking 
	input when user supplies 0.0 or exceeds 20 inputs. Please note 
	that your program will never ask for total number of input at the 
	beginning, it should go on counting the number of inputs given by 
	the user. 
	3. When the input is done, using the values given by the user in the 
	first array do the following: 
	a. Double the value of each of the elements in the input array 
	that have even subscript (0,2,4,…) and store them in the 
	corresponding locations of second array.
	b. Determine the cube root of each of the values in the input 
	array that have odd subscripts (1,3,5,…) and store those 
	values in the corresponding locations of the second array.
	c. Print (on the output console) the content of both the 
	arrays in 2 right justified columns with headings (see the 
	expected output at the bottom).
	4. Find the sum of all the values for both of the arrays and then 
	display them as well. You must find the sum for both the arrays 
	using a single for loop.
	To find out cube root of a number you must use cbrt function of math.h 
	header.
Expected output:

Enter maximum 20 numbers, terminate with 0.0
First number: 2.3
Next: 4.1
Next: 5.0
Next: 7.6
Next: 9.6
Next: -8.2
Next: -3.2
Next: 0.0

There are in total 7 numbers given as input

 Input Array    2nd Array

     2.30000      4.60000
     4.10000      1.60052
     5.00000     10.00000
     7.60000      1.96610
     9.60000     19.20000
    -8.20000     -2.01653
    -3.20000     -6.40000


Sum of the first array:     17.20000
Sum of the second array:     28.95009
*/

/*----------------------------------------------CORRECT SOLUTION-------------------------------------------------------------------------------*/

#include <stdio.h>
#include <math.h>

// maximum size of the arrays
const int MAX = 20;

int main(){
    // declaring 2 double arrays.
    float first[MAX], second[MAX];
    int count = 0;
    float temp;

    printf("Enter maximum %d numbers, terminate with 0.0\n", MAX);
    printf("First number: ");
    scanf("%f", &temp);
/*2.0
3.0
4.0	
	tempp = 2.0	-->3.0
	First[] = 2.0, 3.0*/
	
    // do as long as count < MAX and the last input is not 0.0
    while(count < MAX && temp != 0.0){
        // the last input was not a zero and we still have
        // rooms in the array
        first[count++] = temp;
        printf("Next: ");
        scanf("%f", &temp);
    }
    printf("\n");
    printf("There are in total %d numbers given as input\n\n", count);
    int index;
    for(index = 0; index < count; ++index){
        if (index % 2 == 0){
            second[index] = 2 * first[index];
        }
        else{
            second[index] = cbrt(first[index]);
        }
    }
    // printing into the console
    printf("%12s %12s\n\n", "Input Array", "2nd Array");
    float firstSum = 0.0, secondSum = 0.0;
    for(index = 0; index < count; ++index){
        printf("%12.5f %12.5f\n", first[index], second[index]);
        firstSum += first[index];
        secondSum += second[index];
    }
    printf("\n\n");
    printf("Sum of the first array: %12.5f\n", firstSum);
    printf("Sum of the second array: %12.5f\n", secondSum);

    return 0;
}

/*----------------------------------------------MY SOLUTION-------------------------------------------------------------------------------*/
#include <stdio.h> 
#include <math.h>   
#include <stdlib.h> 

int main(){
	int n= 20;
	float arr1[n], arr2[n];
	int i;
	float value, input, arr1Sum = 0.0, arr2Sum = 0.0;
	int count = 0;
	
	printf("Enter maximum %d numbers, terminate with 0.0\n", n);
			//option 1: donot take frist valuelue outsude loop ---> take it inside the loop ----> good option
			//option 2: takeing frist number separately and then second onwards in the loopp

	//printf("First number: ");
  	//scanf("%f",&value);
  	//count++;
	for(i=0;i<n;i++)
    {
        printf("Enter No: ");
        scanf("%f",&input);   // store the value in input and not in a[i]
                              // if input is not 0.0 then will assign that into a[i]
        if(input==0.0)
            break;
        else{
            arr1[i] = input;
            count++; 		// since we have assigned a value into array so incrementing the count.
        }
    }
    printf("There are in total %d number given as input\n\n", count);
    //printf("There are in total %d number given as input\n\n", i);   // as count == i
	
	printf("%12s %12s\n\n", "Input Array", "2nd Array\n");
	//count = i;
	for(i= 0; i < count; i++){
		if(i%2 == 0){
			arr2[i] = 2 * arr1[i];
		}
		else{
			arr2[i] = cbrt(arr1[i]);
		}
		printf("%12.5f %12.5f\n", arr1[i], arr2[i]);
        arr1Sum += arr1[i];
        arr2Sum += arr2[i];
	}
	printf("\n\n");
    printf("Sum of the first array: %12.5f\n", arr1Sum);
    printf("Sum of the second array: %12.5f\n", arr2Sum);
     
    return 0;	
}