#include <stdio.h>
#include <math.h>

void main()
{
    int given, temp, sum=0;
    printf("This program checks if a given number is an Armstrong number.\n");
    printf("Enter a natural number to check: \n");
    scanf(" %d", &given);
    if(given<0) {printf("Invalid number.");return;}
    int digits = (int)floor(log10(given)) + 1;

    temp = given;
    while(temp>0) {
        sum+=pow(temp%10,digits);
        temp/=10;
    }

    if(sum==given) printf("%d is an Armstrong number", given);
    else  printf("%d is not an Armstrong number", given);
}