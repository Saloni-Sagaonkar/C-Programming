/*Input/Output

C Output:
printf() is one of the main output function. The function sends formatted output to the screen.

C Input:
scanf() is one of the commonly used function to take input from the user. 
The scanf() function reads formatted input from the standard input such as keyboards.

*/

#include <stdio.h>
int main()
{
    int testInteger;
    printf("Enter an integer: ");
    scanf("%d", &testInteger);  
    printf("Integer Number = %d\n",testInteger);
     
	float num1;
    double num2;

    printf("Enter a float number: ");
    scanf("%f", &num1);
    printf("Enter another float number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf\n", num2);
    
    char chr;
    printf("Enter a character: ");
    scanf(" %c",&chr);     
    printf("You entered %c.", chr); 
    return 0;
}

/*OUTPUT:
Enter an integer: 5
Integer Number = 5
Enter a float number: 2.5
Enter another float number: 3.6
num1 = 2.500000
num2 = 3.600000
Enter a character: s
You entered s.

*/