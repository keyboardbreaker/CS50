#include <stdio.h>
#include <cs50.h>

//Program demo on command line arguments when running file executable.

//argc = argument count, argv[0] is the class name.
int main(int argc, string argv[])
{
    if(argc == 2){
        printf("hello, %s\n", argv[1]);
    }
    else{
        printf("hello, world \n");
    }
}