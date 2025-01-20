#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int score1 = 72;
    int score2 = 73;
    int score3 = 33;

    printf("Average: %f\n", (score1 + score2 + score3) / 3.0);

    int scores[3];
    for(int i = 0; i <3; i++)
    {
        scores[i] = get_int (" Score: ");
    }


    //arrays
0
    // int scores[0] = 72;
    // int scores[1] = 73;
    // int scores[2] = 33;
}
