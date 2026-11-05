#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(0));

    int random = rand() % 100 + 1;
    int no_of_guesses = 0;
    int guess;
    do
    {
        printf("Guess The Number Between 1 to 100 : ");
        scanf("%d", &guess);
        if(guess > random)
        {
            printf("Lower Number Please!\n");
        }
        else if(guess < random)
        {
            printf("Higher Number Please!\n");
        }
        else
        {
            printf("Congrats! You Guessed It In %d Attempts\n", no_of_guesses);
        }
        no_of_guesses++;
        
    } while (guess != random);

    return 0;
}
