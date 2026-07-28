#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL)); // Seed the random number generator

    // int randomNumber = rand() % 100; // 0 to 99
    // int randomNumber = rand() % 100 + 1; // 1 to 100

    int minimumNumber, maximumNumber, randomNumber, guessNumber;
    printf("===== Number Guessing Game =====\n");
    printf("Set minimum number: ");
    scanf("%d", &minimumNumber);

    printf("Set maximum number: ");
    scanf("%d", &maximumNumber);

    randomNumber = rand() % (maximumNumber - minimumNumber + 1) + minimumNumber;

    printf("Guess the random number (%d-%d)\n", minimumNumber, maximumNumber);

    while (1)
    {
        printf("Guess random number: ");
        scanf("%d", &guessNumber);

        if (guessNumber < randomNumber) {
            printf("Too low! Try again.\n");
        } else if (guessNumber > randomNumber) {
            printf("Too high! Try again.\n");
        } else {
            printf("🎉 Congratulations! You guessed it.\n");
            break;
        }
    }

    return 0;
}