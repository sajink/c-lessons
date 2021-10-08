#include <stdio.h>
typedef enum {false, true} bool;

void printArray(int arr[], int len)
{
    for(int i=0; i<len;i++) printf("%d - ",arr[i]);
}

void swap(int *now, int *next)
{
    int temp = *now;
    *now = *next;
    *next = temp;
}
 
void main(){
    int tosort[100], count;
    
    // Ask user how long is the list
    printf("Enter count of numbers to sort (<100): ");
    scanf("%d", &count);
    
    // Accept the list of numbers from user, into an array
    printf("Enter %d numbers to be sorted: ", count);
    for(int i=0;i<count;i++) scanf("%d", &tosort[i]);
    
    // Nested loop to sort by bubbling
    for(int i=0;i<count-1;i++) {
        printf("\nOuter Loop: %d", i);
        for(int j=0;j<count-1-i;j++) {
            printf("\n\tInner Loop: %d", j);
            if(tosort[j]>tosort[j+1]) {
                swap(&tosort[j],&tosort[j+1]);
            }
        }
        printf("\n\t Result now: ");
        printArray(tosort, count);
    }
}