#include <stdio.h>

int main(void) {
    int x, y, original, reverse = 0;
    printf("enter number: ");
    scanf("%d", &x);
    original = x;

    for(; x != 0;) {
        y = x % 10;
        reverse = (reverse * 10) + y;
        x /= 10;

    }
    if ( original == reverse) {
        printf("%d is palindrome", original);

    } else {
        printf("%d is not a palindrome", original);
    }


}