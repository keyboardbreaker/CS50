#include <cs50.h>
#include <stdio.h>
#include <math.h>

/* a program that accepts float and returns an integer indicating fewest coins returned to user.
    Assume that the only coins available are quarters (25¢), dimes (10¢), nickels (5¢), and pennies (1¢).
*/

int main(void)
{
    float userInput;

    do
    {
        userInput = get_float("Enter cash: ");
    }
    while (userInput < 0);

    // multiply by 100 so we can deal with ints opposed to floats,
    // floats have a slight imprecision.
    int  change = round(userInput * 100);

    int coins = 0;
    while (change > 0)
    {
        if (change - 25 >= 0)
        {
            change -= 25;
            // add to coin counter.
            coins++;
        }
        else if (change - 10 >= 0)
        {
            change -= 10;
            coins++;
        }
        else if (change - 5 >= 0)
        {
            change -= 5;
            coins++;
        }
        else
        {
            change -= 1;
            coins++;
        }
    }
    printf("%i\n", coins);
}