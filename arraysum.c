#include <stdio.h>

int main(void) {

    int sum = 0;
    int n;
    printf("array elements = ");
    scanf("%d", &n);

    int arraysum[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("elements- ");
        scanf("%d", &arraysum[i]);

    }
    for (i = 0; i < n; i++) {
       sum += arraysum[i];
    }
    printf("sum = %d", sum);
}