#include <cs50.h>
#include <stdio.h>

//prototype: giving the compiler a hint of what is to come.
int square(int n);

int main(void){
    int x= get_int("x: ");
    printf("%i\n", square(x));
}

int square(int n){
    return n * n;
}