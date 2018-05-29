#include <cs50.h>
#include <stdio.h>

int main(void){
    // Prompt user for a positive number
    int n;

    do{
        n = get_int("Positive number: ");
    }
    while(n <= 0);

    //print n many bricks
    for(int i = 0; i < n; i++){
        printf("#");
    }
    printf("\n");
}