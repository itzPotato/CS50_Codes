#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int h;

    do
    {
        h = get_int("Height: ");
    }
    while (h <= 0);

    for (int i = 1; i <= h; i++)
    {
        for (int j = 1; j <= h - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }

        printf("\n");
    }
}
