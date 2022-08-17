/*
Assignment 11: 

Transpose of matrix is actually changing the rows to column and columns to rows. See the following 
example: 
If the Matrix M is as follows:
1	2	3	4
5	6	7	8
9	10	11	12

Then the transpose of M is:
1	5	9
2	6	10
3	7	11
4	8	12

In this assignment you will write a program that will accept a matrix data from user and will print the 
transpose of that matrix after printing the matrix as given. You will need to use 2 dimensional arrays for 
representing the matrix in your program where, the matrix must have row numbers >=3 and <=10 also 
column numbers >=3 and <=10. 
At the beginning of your program ask the user of the program to input number of rows for the matrix, if 
that is invalid (row numbers must be >=3 and <=10), just display an error message and terminate the 
program. If that is valid, then ask for the number of columns, check the validity as well for the number of 
columns, must be >=3 and <=10, if not valid print error message and terminate.
Once you have the valid row and column numbers, declare the 2 dimensional array with them. Then
write a nested for loop to input data into the 2-D array.
Print the 2-D array as it is given by the user, then print the transpose of that given array. Please note 
that you just need to print the transpose of the given array and do not need to change the array to it’s 
transpose form, the content of the array will remain same. Here is expected output.

Expected output: 

Execution 1: 
	Enter number of rows for the matrix(>=3 and <=10): 3
	Enter number of columns for the matrix(>=3 and <=10): 4
	Matrix[0][0]= 1
	Matrix[0][1]= 2
	Matrix[0][2]= 3
	Matrix[0][3]= 4
	Matrix[1][0]= 5
	Matrix[1][1]= 6
	Matrix[1][2]= 7
	Matrix[1][3]= 8
	Matrix[2][0]= 9
	Matrix[2][1]= 10
	Matrix[2][2]= 11
	Matrix[2][3]= 12
	Matrix as given by you:
		 1     2     3     4
		 5     6     7     8
		 9    10    11    12


	Transpose of the given matrix:
		 1     5     9
		 2     6    10
		 3     7    11
		 4     8    12
	 
Execution 2:
	Enter number of rows for the matrix(>=3 and <=10): 2
	Invalid number of rows, acceptable is >=3 and <=10

Execution 3:
	Enter number of rows for the matrix(>=3 and <=10): 3
	Enter number of columns for the matrix(>=3 and <=10): 11
	Invalid number of columns, acceptable is >=3 and <=10
	
*/

#include <stdio.h>    

int main(){
	int rows, columns, i, j;
	//int a[rows][columns];  -> don't know no. of rows and colums
	
	printf("Enter number of rows for the matrix(>=3 and <=10): ");
	scanf("%d", &rows);
	if(rows<3 || rows>10){
		printf("Invalid number of rows, acceptable is >=3 and <=10 \n");
		return 0;
	}
	
  	printf("Enter number of columns for the matrix(>=3 and <=10): ");
    scanf("%d", &columns);
	if(columns<3 || columns>10){
		printf("Invalid number of columns, acceptable is >=3 and <=10 \n");
		return 0;
	}	
	
	int a[rows][columns];		// declare the array
	
	for(i= 0; i<rows; ++i){
		for(j=0; j<columns; ++j){
			printf("Matrix[%d][%d]= ", i, j);
			scanf("%d", &a[i][j]);
		}
	} 
	
	printf("Matrix as given by you: \n");
	for(i= 0; i<rows; ++i){
		for(j=0; j<columns; ++j){
			printf("%6d", a[i][j]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("Transpose of the given matrix: \n");
	for(i= 0; i<columns; ++i){
		for(j=0; j<rows; ++j){
			printf("%6d", a[j][i]);
		}
	    printf("\n");
    }
    return 0;
}
