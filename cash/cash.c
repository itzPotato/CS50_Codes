#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    int c;
    int quarters = 0;
    int nickels = 0;
    int dimes = 0;
    int remaining_cents = 0;

    do
    {
        c = get_int("Change Owed: ");
    }
    while (c <= 0);

    if (c / 25 >= 1)
    {
        quarters = floor(c / 25);
    }

    remaining_cents = c % 25;

    if (remaining_cents >= 10)
    {

        dimes = floor(remaining_cents / 10);
    }

    remaining_cents = remaining_cents % 10;

    if (remaining_cents >= 5)
    {

        nickels = floor(remaining_cents / 5);
    }

    remaining_cents = c % 5;

    int tot_coins = quarters + dimes + nickels + remaining_cents;
    printf("%d\n", tot_coins);
}
