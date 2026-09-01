/*  */

#include <stdio.h>
#include <cs50.h>
#include <String.h>

int LuhnAlgorithm();
int cardLength(int cardNumber);

int main(void){

    int cardNumber;
    do{
        cardNumber = get_String("Number: ");

    }while(card);

    if(cardNumber[0][1]==34 || cardNumber[0][1]==37){
        printf("VISA");
    }else if(){
        printf("MASTERCARD");
    }else if(){
        printf("AMEX");
    }
    else{
        printf("INVALID");
    }

}

int LuhnAlgorithm(int cardNumber){

    cardNumber % 10

}

int cardLength(int cardNumber){



}
