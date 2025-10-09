/*
Name: Sammy Mwangi 
Reg no: CT101/G/26462/25
Description: Guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret;     // The secret number the computer picks
    int guess;      // The player's guess
    int attempts = 0;  // Number of times the player has guessed

    //  Seed the random number generator
    srand(time(0));  // Makes the number different each time you run the program

    //  Generate a random number between 1 and 20
    secret = rand() % 20 + 1;
    printf("[DEBUG] The secret number is: %d\n", secret);
    printf("I'm thinking of a number between 1 and 20.\n");
        
    //  Keep asking the player until they guess correctly
    do {
    
        printf("Enter your guess: ");
        scanf("%d", &guess);  // Read the player's guess
        attempts++;            // Add one to the number of attempts
        if (guess < 1 || guess > 20) {
            printf("\nPlease enter a number between 1 and 20.\n");
            continue;  // skip the rest of the loop, don’t count this as an attempt
        }

        if (guess > secret) {
            printf("Too high!\n");
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("\n Congratulations! You guessed it!\n");
            printf("It took you %d attempts.\n", attempts);
        }

    } while (guess != secret);  // Keep looping until the correct number is guessed

    return 0;
}

		