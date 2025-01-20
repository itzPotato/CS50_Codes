#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("First Number: ");
    int y = get_int("Second Number: ");

    if (x > y)
    {
        printf(" The first number is greater.\n");
    }
   else if (y > x)
   {
        printf(" The second number is greater.\n ");
   }
   else
   {
        printf (" Both numbers are equal.\n");
   }

}
