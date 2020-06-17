#include <stdio.h>

int main(void) {
    int len = 10;
    int arr[] = { 40, 20, 70, 60, 10, 100, 90, 80, 30, 50 };

    int i, j, new;
    for (i = 0; i < len - 1; i++) {
        for (j = 0; j < len - (i + 1); j++) {
            if (arr[j] > arr[j + 1]) {
                new = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = new;
            }
        }
    }
    for (i = 0; i < len; i++) {
        printf("%d ", arr[i]);
    }
}
