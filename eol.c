#include <stdio.h>

int main(void) {
    int j, i, num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    for (i = 1; i < num; i++) {
        for (j = 0; j < num - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    for (i = num; i >= 1; i--) {
        for (j = 0; j < num - i; j++) {
            printf(" ");
        }
        for (j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
};
