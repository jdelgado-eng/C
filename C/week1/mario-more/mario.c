/* hi */

#include <cs50.h>
#include <stdio.h>

int main(void){

    int height;

    do{
        height = get_int("Height: ");

    } while (height<1 || height>=9);

    //rows
    for (int r=0; r<height; r++){
        //spaces
        for (int s=0; s<height-r-1; s++){
            printf(" ");
        }
        //hashes
        for (int h=0; h<=r; h++){
            printf("#");
        }
        printf("  ");
        //
        for(int k=0; k<=r; k++){
            printf("#");
        }
        printf("\n");
    }

}
