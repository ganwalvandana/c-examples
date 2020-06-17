#include <stdio.h>

int main(void) {
    int i, j, num;
    printf("Enter a number: ");
    scanf("%d", &num);
    for (i = 1; i <= num; i++) {
        for (j = 1; j<= num; j++) {
            printf("*");
        }
        printf("\n");
    }
}