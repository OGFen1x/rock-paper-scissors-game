#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to determine the winner
int game(char you, char computer) {
    if (you == computer)
        return -1;  // Draw

    // Stone (s) beats Scissors (x), Scissors (x) beats Paper (p), Paper (p) beats Stone (s)
    if ((you == 's' && computer == 'x') ||
        (you == 'x' && computer == 'p') ||
        (you == 'p' && computer == 's'))
        return 1;  // You win

    return 0;  // Computer wins
}

int main() {
    int n;
    char you, computer;
    int result;

    srand(time(NULL));
    n = rand() % 100;

    // Assign a random choice to computer
    if (n < 33)
        computer = 's';
    else if (n < 66)
        computer = 'p';
    else
        computer = 'x';

    printf("\n\n\n\n\t\t\t\tEnter 's' for STONE, 'p' for PAPER, and 'x' for SCISSORS\n\t\t\t\t\t\t\t");
    scanf(" %c", &you);

    result = game(you, computer);

    if (result == -1) {
        printf("\n\n\t\t\t\tGame Draw!\n");
    } else if (result == 1) {
        printf("\n\n\t\t\t\tWow! You have won the game!\n");
    } else {
        printf("\n\n\t\t\t\tOh! You have lost the game!\n");
    }

    printf("\t\t\t\tYou chose: %c and Computer chose: %c\n", you, computer);

    return 0;
}
