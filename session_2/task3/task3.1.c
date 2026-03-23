// Week 5, Session 2

/* Task 3.1
 * Number Guessing Game
 * A program where the computer selects a random number and the person tries to guess it
 */

#include <stdio.h>
#include <stdlib.h>  // For rand(), srand(), atoi()
#include <time.h>    // For time()
#include <string.h>  // For strcspn()

int main(void) {
    char input[20];      // Buffer for input
    int guess;           // The person's guess
    int target;          // The random number to guess
    int num_guesses;     // Counter for number of guesses
    int min = 1;         // Minimum value for random number
    int max = 100;       // Maximum value for random number
    int playing = 1;     // Flag to control the main game loop
    
    // Seed the random number generator
    srand(time(NULL));
    
    printf("=== Number Guessing Game ===\n");
    
    while (playing == 1) {

        // Reset number of guesses for a new game
        target = min +rand() % (max - min +1);
        num_guesses = 0;
        printf("Im thinking of a number between %d and %d\n", min, max);
        
        while (1) {
            
            printf("Enter your guess or 'quit' to quit: \n");
            fgets(input, sizeof(input), stdin);

         
            if (strncmp(input, "quit", 4) == 0) {
                playing= 0;
                break;
            }

            guess =atoi(input);
            num_guesses++;
            
            if (guess < target) {
                printf("Too low\n");
            } else if (guess > target) {
                printf("Too high\n");
            } else {
                printf("Correct you guessed in %d tries\n",num_guesses);
            
                printf("Would you like to play again? y/n:\n");
                fgets(input, sizeof(input), stdin);
        
                if (input[0] == 'y') {
                    break;
                } else {
                    playing = 0;
                    break;
                }
            }
            
            if (num_guesses == 5) {
                printf("The number is %s\n", (target %2 ==0) ? "even" : "odd");
            }
            if (num_guesses == 8) {
                if (target <= (max/2)) {
                printf("The number is between %d-%d\n", min, max/2);
                } else {
                    printf("The number is between %d-%d\n", max/2+1, max);
                }
            } 
        }
    }

    printf("\nThanks for playing!\n");
    return 0;
}
