#include <cs50.h>
#include <stdio.h>

//prints a square of n length
int main(void){
    // Prompt user for a positive number
    int n;

    do{
        n = get_int("Positive number: ");
    }
    while(n <= 0);

    //print n many rows
    for(int i = 0; i < n; i++)
    {
        //print n many columns
        for(int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
    printf("\n");
}