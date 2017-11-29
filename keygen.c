#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

/* Function to generate one random character a-z including space */
char RandomChar() {
	int charNum = rand() % 27 + 1;  // Choose a random number between 1 and 27.
	char out;                       // Initialize the character variable to be returned by the function.
	if (charNum == 27) {            // Check if the the random selected number is 27,
		out = 20;                     // if it is assign out to be space
	}
	else out = 64+charNum;          // otherwise assign out to be the letter corresponding to the number between 1 and 26.  
	return out;                     // Return our randomly selected character.
}

/* Take a number as an input, this number represents how many characters should be created for keygen. */
int main(int argc, char *argv[]) {
	int i = 0;                                          // Generic integer used for iterating.
	if (argc != 2) {                                    // Checks to make sure the correct number of inputs have been given,
		printf("Error, incorrect number of inputs\n");    // if they have not been, tell the user 
		exit(1);                                          // and exit the program.
	}
	else {                                              // Otherwise:
		srand(time(NULL));                                // Seed rand with the current time.
		for (i = 0; i < atoi(argv[1]); i++) {             // Run through the following code as many times as the user requests.
			printf("%c",RandomChar());                      // Print a random uppercase number or space.
		}
		printf("\n");                                     // Print the newline character once all random characters have been printed.
	}
	return 0;
}
