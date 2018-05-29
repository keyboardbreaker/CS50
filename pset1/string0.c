#include <cs50.h>
#include <stdio.h>
#include <string.h>

//splitting a string to it's individual characters
int main(void)
{
    string s = get_string("input: ");
    printf("output: \n");

    for (int i = 0; i < strlen(s); i++){
        printf("%c \n", s[i]);
    }
}