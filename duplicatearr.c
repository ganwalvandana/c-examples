#include <stdio.h>

int main(void) {
    int n;
    printf("elements in array = ");
    scanf("%d", &n);

    int array1[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("elements- ");
        scanf("%d", array1[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
}