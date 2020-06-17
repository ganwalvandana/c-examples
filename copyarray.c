#include <stdio.h>

int main(void) {

    int n;
    printf("array elements = ");
    scanf("%d", &n);
    int originalarr[n];
    int arraycopy[n];
    int i, j;
    for (i = 0; i < n; i++) {
        printf("elements- ");
        scanf("%d", &arraycopy[i]);
    }

    for (i = 0; i < n; i++) {
        originalarr[i] = arraycopy[i];
    }
    
    for (j = 0; j < n; j++) { 
        printf("%d ", originalarr[j]);
    }    
}