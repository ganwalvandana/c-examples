#include <stdio.h>

int main(void) {

    int x, y;
    printf("enter large number: ");
    scanf("%d", &x);
    printf("enter small number: ");
    scanf("%d", &y);

    int i, j, isprime = 1;
    for (j = y; j <= x; j++){

        for (i = 2; i <= x/2; i++) {

            if ( x % i == 0 ) {
                isprime = 0;
                break;
            }
    printf("%d ", i);
        }
    }
    if (isprime == 1) {
        printf("%d is prime number", x);
    } else {
        printf("%d is not a prime number", x);
    }
}