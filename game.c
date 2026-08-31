/*
This is a series of simple games designed for killing time
game 1 is Mad Libs
game 2 is Basic Maths
game 3 is Guess A Number!
game 4 is
:)
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>

// generate random number between min and max
int randomNumber(int min, int max)
{
    srand(time(NULL));
    int randomNum = (rand() % (max - min + 1)) + min;
    return randomNum;
}

// give user a chance to rest between games
void countDown()
{
    sleep(1);
    for (int i = 3; i > 0; i--)
    {
        printf("%d\n", i);
        sleep(1);
    }
    printf("GO!\n");
}

int main()
{
    int score = 0;

    // Here are quick accesses to each game!
    //  goto game1;
    //  goto game2;
    //  goto game3;
    //  goto game4;

    // starting
    char determination[5];
    printf("Are you ready? (type yes!) ");
    scanf("%s", determination);
    if (strcmp(determination, "yes") != 0)
    {
        printf("GAME OVER!\n");
        return 0;
    }
    printf("Get at least 100 points to WIN!\n");
    countDown();

// game 1
game1:;
    char noun1[20], noun2[20], verb[20], adj[20];
    printf("*** Mad Libs! ***\n");
    printf("Enter the adjective: ");
    scanf("%19s", adj);
    printf("Enter the noun1: ");
    scanf("%19s", noun1);
    printf("Enter the noun2: ");
    scanf("%19s", noun2);
    printf("Enter the verb (w/ ing): ");
    scanf("%19s", verb);

    sleep(1);
    printf("\nThe %s is %s %s!\n", noun1, verb, noun2);
    printf("The %s is really %s!\n", noun2, adj);
    printf("The %s invites friends to see the %s %s!\n", noun1, adj, noun2);

    sleep(1);
    score += 50;
    if (strlen(adj) > 8)
    {
        printf("Excellent!\n");
        score += 20;
    }
    printf("your score is %d\n", score);
    sleep(1);

    countDown();

// game 2
game2:;
    printf("*** Basic Maths ***\n");
    int choice = randomNumber(1, 3);
    int a = randomNumber(1, 100);
    sleep(1);
    int b = randomNumber(1, 100);
    int userAnswer = 0, Answer = 0;

    switch (choice)
    {
    case 1:
        Answer = a + b;
        printf("%d + %d = ", a, b);
        scanf("%d", &userAnswer);
        break;
    case 2:
        Answer = a - b;
        printf("%d - %d = ", a, b);
        scanf("%d", &userAnswer);
        break;
    case 3:
        Answer = a * b;
        printf("%d * %d = ", a, b);
        scanf("%d", &userAnswer);
        break;
    }
    if (userAnswer == Answer)
    {
        printf("You are correct!\n");
        score += 50;
        if (choice == 3)
        {
            printf("Awesome!\n");
            score += 20;
        }
    }
    else
    {
        printf("The answer is %d !\nYou should learn maths!\n", Answer);
        score -= 100;
    }
    sleep(1);
    printf("your score is %d\n", score);

    countDown();

// game 3
game3:;
    printf("*** Guess A Number! ***\n");
    int number = randomNumber(1, 100);
    int userNum = 0;
    printf("Guess a number between 1 and 100: \n");
    do
    {
        scanf("%d", &userNum);
        if (userNum > number)
        {
            printf("TOO HIGH!\n");
            score -= 10;
        }
        else if (userNum < number)
        {
            printf("TOO LOW!\n");
            score -= 10;
        }
    } while (userNum != number);
    score += 50;
    printf("You got it!\n");
    sleep(1);
    printf("your score is %d\n", score);

    countDown();

    // game 4
    // game4:;

    if (score >= 100)
    {
        printf("your score is %d\nYou WIN!\n:)\n", score);
    }
    else if (score < 0)
    {
        printf("your score is %d\nYou have gone bankrupt!\n:(\n", score);
    }
    else
    {
        printf("your score is %d\nYou LOSE!\n:|\n", score);
    }

    return 0;
}