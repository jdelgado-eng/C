/*  */

#include <cs50.h>
#include <stdio.h>

int main (void){

    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);


    //For each row
    for (int row = 0; row < height; row++)
    {
        for (int space = 0; space < height - row - 1; space++)
        {
            printf(" ");
        }

        //For each column
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }
        //New line after each row
        printf("\n");
    }

}
