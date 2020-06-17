#include <stdio.h>

int main(void) {

    int n;
    printf("Enter the number of elements in array: ");
    scanf("%d", &n);
   
   int elements[n];
   int i;
    for (i = 0; i < n; i++) {
        printf(" number-%d = ", i);
        scanf("%d", &elements[i]);
    }

    for (i = 0; i < n; i++) {
        printf(" elements in array are = %d\n", elements[i]);
    }
}   