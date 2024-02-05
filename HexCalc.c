#include "stdio.h"

// CARE! Hex Digits are to read from right to left here, to lazy to implent the turn around thingy


int main(){
    int number = 25;
    int hex = 0;
    char hexList[sizeof(number)];
    for (int i=0; i<sizeof(number); i++){
        hex = number % 16;
        number = number / 16;
        switch(number){
            case 10:
                hexList[i] = 'A';
            case 11:
                hexList[i] = 'B';
            case 12:
                hexList[i] = 'C';
            case 13:
                hexList[i] = 'D';
            case 14:
                hexList[i] = 'E';
            case 15:
                hexList[i] = 'F';
        }
        if (number <= 9){
            hexList[i] = hex;
        }
        printf("%i", hex);
    }
    return 0;



}
