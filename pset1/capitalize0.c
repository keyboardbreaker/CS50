#include <stdio.h>
#include <cs50.h>
#include <string.h>

//capitalizes user's inputed string character
//this uses the fact that the A and a are seperated by 32 bits in ascii
int main(void){
    string s = get_string("Before: ");
    printf("After: ");

    for(int i = 0, n = strlen(s); i < n; i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            printf("%c", s[i] - ('a' -'A'));
        }
        else{
            printf("%c", s[i]);
        }
    }
    printf("\n");
}