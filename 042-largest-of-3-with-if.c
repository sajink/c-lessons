#include <stdio.h>

int withSimpleIf(int a, int b, int c) {
    if(a>=b && a>=c) return a;
    if(b>=a && b>=c) return b;
    return c;
}

int withIfElse(int a, int b, int c) {
    if(a>=b && a>=c) return a;
    else if(b>=a && b>=c) return b;
    else return c;
}

int withNestedIf(int a, int b, int c) {
    if(a>=b) {
        if(a>=c) return a;
    } else {
        if(b>=c) return b;
    }
    return c;
}

void main() {
    int a,b,c,result;
    printf("This program prints largest of 3 numbers a,b,c\n");
    printf("Please enter the three numbers:\n\n");
    printf("a: ");scanf("%d", &a);
    printf("b: ");scanf("%d", &b);
    printf("c: ");scanf("%d", &c);

    //int result = withSimpleIf(a,b,c);
    //int result = withIfElse(a,b,c);
    //int result = withNestedIf(a,b,c);
    //printf("Largest: %d", result);


    if(a>=b) {
        if(a>=c) printf("Largest: %d", a);
    }
    else if(b>=c) printf("Largest: %d", b);
    else printf("Largest: %d", c);
}