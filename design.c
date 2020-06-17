#include <stdio.h>

int main(void) {
    int x;
    printf("enter number: ");
    scanf("%d", &x);

    int i, j;

    for (i = 0; i <= x-1; i++) {
        for ( j = 0; j <= x-i; j++ ) {
           printf("  ");

        }
        for ( j = 1; j <= i*2 -1; j++) {
            printf("* ");
        }
        printf("\n");
    }
     for (i = x; i >= 1; i--) {
        for ( j = 0; j <= x-i; j++ ) {
           printf("  ");

        }
        for ( j = 1; j <= i*2 -1; j++) {
            printf("* ");
        }
        printf("\n");
    }
}