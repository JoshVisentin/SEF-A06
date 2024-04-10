#include <stdio.h>
#include <cstdlib>
#include <ctime>
#include <ctype.h>
#pragma warning(disable : 4996)

int main(void) {
    int playerMove = -1, computerMove = -1;
    char userChoice = 0;
    const char* moveOpts[3] = { "Rock", "Paper", "Scissors" };

    srand(time(0));

    printf("Welcome to Rock Paper Scissors!\n");
    userChoice = 0;
    //Prompt user.
    printf("Enter (R)ock, (P)aper, or (S)cissors: ");
    scanf(" %c", &userChoice);
    //Convert user choice to integer (rock = 0, paper = 1, scissors = 2)
    switch (toupper(userChoice)) {
    case 'R':
        playerMove = 0;
        break;
    case 'P':
        playerMove = 1;
        break;
    case 'S':
        playerMove = 2;
        break;
    }
    //Generate computer move.
    computerMove = rand() % 3;
    //Show moves.
    printf("You chose: %s\n", moveOpts[playerMove]);
    printf("Computer chose: %s\n", moveOpts[computerMove]);
    //Determine winner.
    if (playerMove == computerMove) {
        printf("It's a tie!\n");
    } else if (computerMove + 1 == playerMove || computerMove - 2 == playerMove) {
        printf("You win!\n");
    } else {
        printf("You lose!\n");
    }
}