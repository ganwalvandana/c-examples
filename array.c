#include <stdio.h>

int main(void) {
    int n;
    printf("Number of array = ");
    scanf("%d", &n);

    int array[n];
    int i;
    for (i = 0; i < n; i++) {
        printf("Number-%d : ", i);
        scanf("%d",&array[i] );
    }
    for (i = 0; i < n; i++) {
        printf("%d\n",array[i]);
    }
    for (i = n-1; i >= 0; i--) {
        printf("%d\n",array[i]);
    }



}