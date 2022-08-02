/*
Example 1: Required Pattern
Enter how many lines: 5
*
**
***
****
*****
*/
#include <stdio.h>

int main(){
	int n; 								//line number
	int i, j;							//i=line number , j=column number in the line

	printf("Enter how many lines: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; ++i){
		for(j=1; j<=i; ++j){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*-------------------------------------------------------------------------------------------------------------------------------------*/

/*
Example 2: Required Pattern
Enter how many lines: 5
*****
****
***
**
*
*/

#include <stdio.h>

int main(){
	int n; 							
	int i, j;	
							
	printf("Enter how many lines: ");
	scanf("%d", &n);
	
	for(i=n; i>=1; --i){
		for(j=1; j<=i; ++j){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*
Example 3: Required Pattern
Enter how many lines: 8
*
**
***
****
*****
******
*******
********
********
*******
******
*****
****
***
**
*
*/

#include <stdio.h>
int main(){
	int n; 							
	int i, j;	
							
	printf("Enter how many lines: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; ++i){
		for(j=1; j<=i; ++j){
			printf("*");
		}
		printf("\n");
	}
	
	for(i=n; i>=1; --i){
		for(j=1; j<=i; ++j){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*
Example 4: Required Pattern
Enter how many lines: 10
   1
   2   2
   3   3   3
   4   4   4   4
   5   5   5   5   5
   6   6   6   6   6   6
   7   7   7   7   7   7   7
   8   8   8   8   8   8   8   8
   9   9   9   9   9   9   9   9   9
  10  10  10  10  10  10  10  10  10  10
*/
#include <stdio.h>

int main(){
	int n; 							
	int i, j;	
							
	printf("Enter how many lines: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; ++i){
		for(j=1; j<=i; ++j){
			printf("%4d", i);		//%4d -> 4 spaces
		}
		printf("\n");
	}
	return 0;
}

/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*
Example 5: Required Pattern
Enter how many lines: 10
   1
   1   2
   1   2   3
   1   2   3   4
   1   2   3   4   5
   1   2   3   4   5   6
   1   2   3   4   5   6   7
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8   9
   1   2   3   4   5   6   7   8   9  10
*/
#include <stdio.h>

int main(){
	int n; 							
	int i, j;	
							
	printf("Enter how many lines: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; ++i){
		for(j=1; j<=i; ++j){
			printf("%4d", j);
		}
		printf("\n");
	}
	return 0;
}

/*-------------------------------------------------------------------------------------------------------------------------------------*/
/*
Example 6: Required Pattern
Enter how many lines: 10
   0
   1   0
   0   1   0
   1   0   1   0
   0   1   0   1   0
   1   0   1   0   1   0
   0   1   0   1   0   1   0
   1   0   1   0   1   0   1   0
   0   1   0   1   0   1   0   1   0
   1   0   1   0   1   0   1   0   1   0
*/
#include <stdio.h>

int main(){
	int n; 							
	int i, j;	
							
	printf("Enter how many lines: ");
	scanf("%d", &n);
	
	for(i=1; i<=n; ++i){
		for(j=1; j<=i; ++j){
			printf("%4d", (i+j)%2);
		}
		printf("\n");
	}
	return 0;
}



