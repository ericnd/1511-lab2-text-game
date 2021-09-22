// My Text Game
// text_game.c
//
// This program was written by Eric Do (z5388175)
// on 21 September 2021
//
// This is rock paper scissors (gun but no one has to know) ;)

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // The variable used to deterine what the player has chosen
    // rps (rock paper scissors)
    char rps;
    // buffer included because for some reason enter is counted as an input?
    char buffer;

    // While loop to keep the game going
    while (1) {

        // Asking the player for an input
        printf("Hey player! Rock Paper Scissors! r/p/s (q to quit) ");
        // buffer included to stop program from breaking 
        // however this assumes that the player will not do double inputs
        scanf("%c%c", &rps, &buffer);
        
        // An option for if the player wishes to quit
        if (rps == 'q') {
            printf("\nThanks for playing!\n");
            return 0;
        }

        // Choosing Scissors
        else if (rps == 's') {

            // To randomise the outcome properly, time needs to be included
            // It would be easier to implement this as a function
            // That way I don't have to repeat it so much :(
            // Variable named t since i don't have to work with it afterwards
            time_t t;
            srand((unsigned) time(&t));
            int num;
            // A random number between 0 and 3 is being generated
            num = rand()%4;
            // Plus one to make it between 1 and 4
            // The numbers 1 to 4 coresspond to the 4 choices it has
            // rock, paper, scissors and the secret choice: gun
            num++;

            // If the randomiser chooses scissors
            if (num == 1) {
                printf("Scissors! Draw!\n");
            }
            
            // If the randomiser chooses paper
            else if (num == 2) {
                printf("Paper! I lost :( \n");
            }

            // If the randomimser chooses rock
            else if (num == 3) {
                printf("Rock! I WIN! \n");
            }

            // If the randomiser chooses a secret 4th option
            else if (num == 4) {
                printf("GUN HAHAHAHA GET PRANKED! \n");
            }
        }

        // If the player chooses paper
        else if (rps == 'p') {
            time_t t;
            srand((unsigned) time(&t));
            int num;
            num = rand()%4;
            num++;

            if (num == 1) {
                printf("Scissors! I WIN! \n");
            }
            
            else if (num == 2) {
                printf("Paper! Draw! \n");
            }

            else if (num == 3) {
                printf("Rock! I lost :( \n");
            }

            else if (num == 4) {
                printf("GUN HAHAHAHA GET PRANKED! \n");
            }
        }

        // If the player chooses rock
        else if (rps == 'r') {
            time_t t;
            srand((unsigned) time(&t));
            int num;
            num = rand()%4;
            num++;

            if (num == 1) {
                printf("Scissors! I lost :( \n");
            }
            
            else if (num == 2) {
                printf("Paper! I WIN! \n");
            }

            else if (num == 3) {
                printf("Rock! Draw! \n");
            }

            else if (num == 4) {
                printf("GUN HAHAHAHA GET PRANKED! \n");
            }
        }

        // An error message for if the input is not correct
        else {
            printf("\nPlease enter a valid input. \n");
        }
    }
}