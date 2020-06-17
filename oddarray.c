#include <stdio.h>

int main(void) {
    int n;
    printf("length of array = ");
    scanf("%d", &n);

    int array1[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("element = ");
        scanf("%d", &array1[i]);
    }
    for (i = 0; i < n; i++) {
        printf("%d\n", array1[i]);
    }
}