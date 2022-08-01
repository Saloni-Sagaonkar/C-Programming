/*
1. break: 
The break statement ends the loop immediately when it is encountered.
Itis almost always used with if...else statement inside the loop.
*/

// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, the loop terminates

#include <stdio.h>

int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter n%d: ", i);
      scanf("%lf", &number);

      // if user enters a negative number, break the loop
      if (number < 0.0) {
         break;
      }

      sum += number; 
   }
   printf("Sum = %.2lf", sum);
   return 0;
}
/*OUTPUT:
Enter n1: 2.4
Enter n2: 4.5
Enter n3: 3.4
Enter n4: -3
Sum = 10.30
*/

/*--------------------------------------------------------------------------------------------------------------------------------------*/

/*
2.continue:
The continue statement skips the current iteration of the loop and continues with the next iteration. 
*/ 

// Program to calculate the sum of numbers (10 numbers max)
// If the user enters a negative number, it's not added to the result

#include <stdio.h>
int main() {
   int i;
   double number, sum = 0.0;

   for (i = 1; i <= 10; ++i) {
      printf("Enter a n%d: ", i);
      scanf("%lf", &number);

      if (number < 0.0) {		//it will skip negative number
         continue;
      }

      sum += number; 
   }
   printf("Sum = %.2lf", sum);
	return 0;
}

/*OUTPUT:
Enter n1: 1.1
Enter n2: 2.2
Enter n3: 5.5
Enter n4: 4.4
Enter n5: -3.4
Enter n6: -45.5
Enter n7: 34.5
Enter n8: -4.2
Enter n9: -1000
Enter n10: 12
Sum = 59.70

*/