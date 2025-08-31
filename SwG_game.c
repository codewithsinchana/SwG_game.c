#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));
    int player, computer = rand() % 3;

    printf("Choose 0 for Snake, 1 for Water, 2 for Gun: ");
    scanf("%d", &player);

    if (player == 0)
        printf("You chose Snake - 0\n");
    else if (player == 1)
        printf("You chose Water - 1\n");
    else if (player == 2)
        printf("You chose Gun - 2\n");
    else
    {
        printf("Invalid choice!\n");
        return 0;
    }

    if (computer == 0)
        printf("Computer chose Snake - 0\n");
    else if (computer == 1)
        printf("Computer chose Water - 1\n");
    else
        printf("Computer chose Gun - 2\n");

    if (player == computer)
    {
        printf("It's a draw!\n");
    }
    else if ((player == 0 && computer == 1) ||
             (player == 1 && computer == 2) ||
             (player == 2 && computer == 0))
    {
        printf("You win!\n");
    }
    else
    {
        printf("You lose!\n");
    }

    return 0;
}
