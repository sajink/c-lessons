#include <stdio.h>

void main() {
    char c;
    printf("Enter an alphabet a-z A-Z: \n");
    scanf(" %c", &c);
    if(c>64&&c<91) printf("Upper Case");
    else if(c>96&&c<123) printf("Lower Case");
    else printf("Invalid Input");
}