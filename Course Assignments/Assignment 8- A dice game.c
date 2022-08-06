/*Assignment 8: A dice game 

Required Output:
	Computer rolled two dice...Guess the sum
	Enter any <= 0 value to terminate.
	Enter your number: 5
	Darn!!! Bad attempt, -5
	sum was: 8

	Total Correct: 0
	Total Incorrect: 1
	Score: -5

	Computer rolled two dice...Guess the sum
	Enter any <= 0 value to terminate.
	Enter your number: 4
	Darn!!! Bad attempt, -5
	sum was: 7

	Total Correct: 0
	Total Incorrect: 2
	Score: -10

	Computer rolled two dice...Guess the sum
	Enter any <= 0 value to terminate.
	Enter your number: 11
	Bravo!!! You were correct +10

	Total Correct: 1
	Total Incorrect: 2
	Score: 0

	Computer rolled two dice...Guess the sum
	Enter any <= 0 value to terminate.
	Enter your number: 0
	Total Correct: 1
	Total Incorrect: 2
	Score: 0

	Thank you for playing...

*/

#include <stdio.h> 
#include <time.h>   
#include <stdlib.h> 

int main(){
	int user_guess;
	int correct_count=0;
	int incorrect_count = 0;
	int quite = 0;
	int score=0;

  	srand(time(NULL));
	
	while(!quite){
  	
	  	int dice1 = (rand() % 6) + 1;		//(rand() % 6) -> remainder between 0 - 5, so add 1 to get between 0 - 6
	  	int dice2 = (rand() % 6) + 1;
	  	int sum = dice1 + dice2;

		printf("Computer rolled two dice...Guess the sum\n");
		printf("Enter any <= 0 value to terminate.\n");
	  	printf("Enter your number: ");
	    scanf("%d", &user_guess);
	    
	    if (user_guess <= 0){                    
	      	quite = 1;
	    }
	    else if(user_guess == sum){                 
	      	correct_count++;
	      	score += 10;
	      	printf("Bravo!!! You were correct +10\n\n");
	    }
	    else{
	    	incorrect_count++;
	    	score -= 5;
	    	printf("Darn!!! Bad attempt, -5\n");
	    	printf("sum was: %d\n\n", sum);
	    }
	   
		printf("Total Correct: %d\n", correct_count);
		printf("Total Incorrect: %d\n", incorrect_count);
		printf("Score: %d\n\n", score);	
	}
	
	printf("Thank you for playing...\n");
  	return 0;
}