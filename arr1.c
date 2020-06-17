#include <stdio.h>

int main(void) {

    int m, n, result = 1;
    printf(" enter base: ");
    scanf("%d", &n);
    printf(" enter expo: ");
    scanf("%d", &m);

   for (;m != 0;) {
     result *= n;
     m--;
   }
   printf("result.: %d", result);
}