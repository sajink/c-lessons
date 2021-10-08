#include <stdio.h>

void main() {
    int a,b,c,d;
    float ratio;
    printf("This program prints (a+b)/(c-d), where c != d.\nPlease enter the four values.\n\n");
    printf("a: ");scanf("%d", &a);
    printf("b: ");scanf("%d", &b);
    printf("c: ");scanf("%d", &c);
    printf("d: ");scanf("%d", &d);

    if(c==d) {printf("Error: c and d should not be same!");return;}

    ratio = (float)(a+b)/(c-d);
    printf("Ratio: %f", ratio);
}