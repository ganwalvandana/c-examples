#include <stdio.h>

int main(void) {

    int n;
    int prev2 = 0, prev1 = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    // printf("%d\n%d\n", prev2, prev1);
    if (n == 1) {
        printf ("%d", prev2);
        
    } else if (n<=0) {
        printf("no series ");
    } else {
    int i;
    for (i = 0; i < n ; i++) {
        int curr = prev1 + prev2;
        printf("%d\n", curr);
        prev2 = prev1;
        prev1 = curr;
    }

    }



}