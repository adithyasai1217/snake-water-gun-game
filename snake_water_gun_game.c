#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int user, computer;

    // Initialize random number generator
    srand(time(NULL));

    // Computer chooses 0, 1, or 2
    computer = rand() % 3;

    printf("===== Snake Water Gun Game =====\n");
    printf("0 -> Snake\n");
    printf("1 -> Water\n");
    printf("2 -> Gun\n");
    printf("Enter your choice: ");
    scanf("%d", &user);

    if (user < 0 || user > 2)
    {
        printf("Invalid choice!\n");
        return 0;
    }

    // Display user's choice
    printf("\nYou chose: ");
    if (user == 0)
        printf("Snake\n");
    else if (user == 1)
        printf("Water\n");
    else
        printf("Gun\n");

    // Display computer's choice
    printf("Computer chose: ");
    if (computer == 0)
        printf("Snake\n");
    else if (computer == 1)
        printf("Water\n");
    else
        printf("Gun\n");

    // Decide winner
    if (user == computer)
    {
        printf("\nResult: Draw!\n");
    }
    else if ((user == 0 && computer == 1) ||
             (user == 1 && computer == 2) ||
             (user == 2 && computer == 0))
    {
        printf("\nResult: You Win!\n");
    }
    else
    {
        printf("\nResult: Computer Wins!\n");
    }

    return 0;
}
