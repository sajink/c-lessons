#include <stdio.h>

int compare(int w, int h) {
    return w>45&&h<150;
}

void noarray() {
    int w1=40;
    int w2=43;
    int w3=54;
    int h1=140;
    int h2=143;
    int h3=154;
    
    int count=0;
    if(compare(w1,h1)) count++;
    if(compare(w2,h2)) count++;
    if(compare(w3,h3)) count++;
}

int withwhile() {
    int weights[100] = {40,43,54,39,47,39,999};
    int heights[100] = {140,143,154,139,147};
    int count=0, i=0;

    while(weights[i]!=999) {
        if(compare(weights[i], heights[i])) count++;
        i++;
    } 
    
    printf("There are %d people satisfying the condition", count);
    return count;
}

int withfor() {
    int weights[5] = {40,43,54,39,47};
    int heights[5] = {140,143,154,139,147};
    int count=0;

    for(int i=0;i<5;i++) {
        if(compare(weights[i], heights[i])) count++;
    }
    
    printf("There are %d people satisfying the condition", count);
    return count;
}


void main() {
    withfor();
    withwhile();
}