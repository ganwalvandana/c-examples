#include <stdio.h>

int main(void) {

    int x;
    printf(" enter : ");
    scanf("%d", &x);

    int i;

    int array[x];

    for (i = 0; i < x; i++) {
        scanf("%d", &array[i]);

    }
    int largestKoIndex = 0;
    for (i = 1; i < x; i++) {
        if (array[largestKoIndex] < array[i]) {
            largestKoIndex = i;
        }
    }
    printf("the largest no. is %d", array[largestKoIndex]);
}