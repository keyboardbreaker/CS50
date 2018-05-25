#include <cs50.h>
#include <stdio.h>

int main(void){
    //prompt user for answer
    char c= get_char("answer: ");

    switch(c){
        case 'Y':
        case 'y':
        printf("Yes \n");
        break;

        case 'N':
        case 'n':
        printf("No \n");
        break;
    }
}
