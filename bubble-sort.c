#include <stdio.h>
typedef enum {false, true} bool;

void printArray(int arr[], int len)
{
    for(int i=0; i<len;i++) printf("%d - ",arr[i]);
}

void simpleBubble(int tosort[], int count) {
    int swap;
    for(int i=0;i<count-1;i++) {
        printf("\nOuter Loop: %d", i);
        for(int j=0;j<count-1-i;j++) {
            printf("\n\tInner Loop: %d", j);
            if(tosort[j]>tosort[j+1]) {
                // swap the numbers
                swap = tosort[j];
                tosort[j] = tosort[j+1];
                tosort[j+1] = swap;
            }
        }
        printf("\n\t");
        printArray(tosort, count);
    }
}

void optimBubble(int tosort[], int count) {
    int swap;
    bool swapped;
    for(int i=0;i<count-1;i++) {
        swapped = 0;
        printf("\nOuter Loop: %d", i);
        for(int j=0;j<count-1-i;j++) {
            printf("\n\tInner Loop: %d", j);
            if(tosort[j]>tosort[j+1]) {
                // swap the numbers
                swapped = 1;
                swap = tosort[j];
                tosort[j] = tosort[j+1];
                tosort[j+1] = swap;
            }
        }
        printf("\n\t");
        printArray(tosort, count);
        if(!swapped) break;
    }
}

void main(){
    int tosort[100], count;
    printf("Enter count of numbers to sort (<100): ");
    scanf("%d", &count);
    
    printf("Enter %d numbers to be sorted: ", count);
    for(int i=0;i<count;i++) scanf("%d", &tosort[i]);
    
    simpleBubble(tosort,count);
    //optimBubble(tosort,count);
}