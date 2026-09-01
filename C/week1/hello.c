/* In a file called , in a folder called , implement a program in C that prompts the user for their name and then says hello to that user. */

#include <cs50.h>
#include <stdio.h>

int main(void){

    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}
