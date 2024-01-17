#include "stdio.h"

int main(){
    printf("Welcome to fibonacci Calculator");
    int term1 = 0;
    int term2 = 1;
    int i,n;

    int NextTerm = term1 + term2;

    scanf("Enter Number of terms: %d \n", &n);
    
    for (i=3; i <= n; i++){
        printf("%d", NextTerm);
        term1 = term2;
        term2 = NextTerm;
        NextTerm = term1 + term2;
    }
    return 0;
}
