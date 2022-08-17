/*Programming Arrays

An array is a variable that can store multiple values. 
For example, if you want to store 100 integers, you can create an array for it.
	
Declaration of array:  dataType arrayName[arraySize];
						int data[100];
						
Initalizing an aray: 	int mark[5] = {19, 10, 8, 17, 9}; OR
						int mark[ ] = {19, 10, 8, 17, 9};
*/

/*--------------------------------------------------------------------------------------------------------------------------------------*/

//Example 1: Array Input/Output

// Program to take 5 values from the user and store them in an array
// Print the elements stored in the array
#include <stdio.h>

int main() {
	int values[5];
	printf("Enter 5 integers: ");
	
	// taking input and storing it in an array
	for(int i = 0; i < 5; ++i) {
	    scanf("%d", &values[i]);
	}
	
	printf("Displaying integers: ");
	
	// printing elements of an array
	for(int i = 0; i < 5; ++i) {
	    printf("%d\n", values[i]);
	}
	return 0;
}
/*OUTPUT:
Enter 5 integers: 15
16
17
18
19

Displaying integers: 15
16
17
18
19
*/

/*--------------------------------------------------------------------------------------------------------------------------------------*/
//Example 2: Program to find the average of n numbers using arrays

#include <stdio.h>
int main() {

  int marks[10], i, n, sum = 0;
  double average;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  for(i=0; i < n; ++i) {
    printf("Enter number%d: ",i+1);
    scanf("%d", &marks[i]);
          
    // adding integers entered by the user to the sum variable
    sum += marks[i];
  }

  average = double(sum )/n;
  printf("Average = %lf", average);

  return 0;
}
/*OUTPUT:
Enter number of elements: 5
Enter number1: 1
Enter number2: 2
Enter number3: 4
Enter number4: 8
Enter number5: 9
Average = 4.800000
*/