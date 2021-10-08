#include <stdio.h>

void main(){
    int i1, i2;
    printf("Enter first number: ");
    scanf("%d", &i1);
    printf("Enter second number: ");
    scanf("%d", &i2);
    if(i1>i2) printf("First number is larger i.e. %d > %d", i1, i2);
    else if(i1<i2) printf("First number is smaller i.e. %d < %d", i1, i2);
    else printf("Both numbers are equal");
}

