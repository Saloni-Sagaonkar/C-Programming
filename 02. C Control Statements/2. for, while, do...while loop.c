//1. for loop

// Program to calculate the sum of first n natural numbers
// Positive integers 1,2,3...n are known as natural numbers

#include <stdio.h>
int main()
{
    int num, count, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    // for loop terminates when num is less than count
    for(count = 1; count <= num; ++count)				//( initialization ; condition ; increment / decrement )
    {
        sum += count;
    }
    printf("Sum = %d", sum);
    return 0;
}

/*OUTPUT:
Enter a positive integer: 15
Sum = 120
*/

/*-------------------------------------------------------------------------------------------------------------------------------------*/

//2. While loop

// Program to calculate the sum of first n natural numbers using while loop

#include <stdio.h>
int main()
{
    int num, count = 1, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    while(count <= num){
    	sum += count;
    	count++;
	}
    printf("Sum = %d", sum);

    return 0;
}

/*-------------------------------------------------------------------------------------------------------------------------------------*/

//3. do...while loop

// Program to add numbers until the user enters zero

#include <stdio.h>
int main() {
  double number, sum = 0;

  // the body of the loop is executed at least once
  do {
    printf("Enter a number: ");
    scanf("%lf", &number);
    sum += number;
  }
  while(number != 0.0);

  printf("Sum = %.2lf",sum);

  return 0;
}
/*OUTPUT:
Enter a number: 5.6
Enter a number: 4
Enter a number: 3.2
Enter a number: 8.2
Enter a number: 1.2
Enter a number: 0
Sum = 22.20
*/