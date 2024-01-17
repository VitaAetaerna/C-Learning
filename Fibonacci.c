#include "stdio.h"

int main(){
    int term1 = 0;
    int term2 = 1;
    int i;
    int n;
    printf("Welcome to fibonacci Calculator \n");
    int NextTerm = term1 + term2;

    for (i=3; i <= 25; i++){
        printf("%d \n", NextTerm);
        term1 = term2;
        term2 = NextTerm;
        NextTerm = term1 + term2;
    }
    return 0;
}
