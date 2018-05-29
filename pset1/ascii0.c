#include <stdio.h>
#include <cs50.h>
#include <string.h>

//prints the ascii equivalent of the character, by casting the character to an int.
int main(void){
    string s = get_string("Name: ");
    for (int i = 0; i < strlen(s); i++){
        printf("%c %i \n", s[i], (int) s[i]);
    }
}