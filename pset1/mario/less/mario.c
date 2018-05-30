#include <cs50.h>
#include <stdio.h>

/* a program that accepts height and produces a half pyramid as follows
Height: 5
    ##
   ###
  ####
 #####
######
*/

int main(void)
{
    //get_int is a function written in cs50 library, explained in Lecture 1 at 40:50

    int height = 0;

    do
    {
        height = get_int("Height: ");
    }
    //invalid inputs, less than 0 or greater than 23
    while (height < 0 || height > 23);

    //number of first row whitespaces are = (height - 1)
    int initialWhiteSpace = height - 1;

    for (int i = 0; i < height; i++)
    {
        //base is height + 1
        for (int j = 0; j < height + 1; j++)
        {
            if (j < initialWhiteSpace)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        initialWhiteSpace--;
        printf("\n");
    }
}