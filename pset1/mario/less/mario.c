#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //get_int is a function written in cs50 library, explained in Lecture 1 at 40:50
    int i = get_int("please enter the pyramid height: ");
    printf ("You entered: %i\n", i);
}