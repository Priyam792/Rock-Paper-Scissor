#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#ifdef _WIN32
#include <windows.h>
void sleep_ms(int ms) { Sleep(ms); }

#else
#include <unistd.h>
void sleep_ms(int ms) { usleep(ms * 1000); }

#endif

int bot()
{
    srand(time(NULL));
    return rand() % 3;
    // 0 for rock , 1 for paper , 2 for scissor
}

int main()
{
    int ch;
    char name[50];
    int p = 0, c = 0;
    printf("\t !!! Rock , Paper , Scissor !!! \n");
    printf("Enter your name : ");
    scanf("%s", name);

    printf("\n Use : \n '1' for Rock \n '2' for Paper \n '3' for Scissor  ");
    for (int i = 0; i < 3; i++)
    {
        printf("\n Your turn : ");
        scanf("%d", &ch);
        int n = bot();
        printf("Your choice : ");
        if (ch == 1)
        {
            printf("Rock\n");
        }
        else if (ch == 2)
        {
            printf("Paper\n");
        }
        else
        {
            printf("Scissor\n");
        }
        printf("Computer choice : ");
        if (n == 0)
        {
            printf("Rock\n");
        }
        else if (n == 1)
        {
            printf("Paper\n");
        }
        else
        {
            printf("Scissor\n");
        }
        if (n == 0 && ch == 1 || n == 1 && ch == 2 || n == 2 && ch == 3)
        {
            printf(" Tie \n ");
        }
        else if (n == 0 && ch == 3 || n == 1 && ch == 1 || n == 2 && ch == 2)
        {
            printf(" Lose \n");
            c++;
        }
        else if (n == 0 && ch == 2 || n == 1 && ch == 3 || n == 2 && ch == 1)
        {
            printf(" Win \n");
            p++;
        }
        else
        {
            printf("Enter a valid character , skiping this round \n");
            continue;
        }
    }
    printf("\n");
    printf("Calculating Results");
    for (int i = 0; i < 10; i++)
    {
        printf(".");
        fflush(stdout);
        sleep_ms(100);
    }
    if (p == c)
    {
        printf("\n Your score : %d , Bot's score : %d \n Tied ", p, c);
    }
    else if (p < c)
    {
        printf("\n Your score : %d , Bot's score : %d \n Defeat, Better luck next time ", p, c);
    }
    else if (p > c)
    {
        printf("\n Your score : %d , Bot's score : %d \n Victory , %s has won the game  ", p, c, name);
    }
}
