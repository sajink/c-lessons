#include <stdio.h>

void main()
{
    char given, a = 'a', z = 'z', A = 'A', Z = 'Z';
    printf("Enter an alphabet a-z A-Z: \n");
    scanf(" %c", &given);
    if (given >= A && given <= Z) printf("Upper Case");
    else if (given >= a && given <= z) printf("Lower Case");
    else printf("Invalid Input");
}