#include <stdio.h>

int main(void) {

    int length;
    printf("enter length of array: ");
    scanf("%d", &length);

    int array[length];
    int i, j, new;
    for (i = 0; i < length; i++) {
        scanf("%d", &array[i]);
    }
    int sindex;
    for (i = 0; i < length - 1; i++) {
        sindex = i;
        for (j = i + 1; j < length; j++) {
            if (array[sindex] > array[j]) {
                sindex = j;
            } 
        }
        new = array[i];
        array[i] = array[sindex] ;
        array[sindex] = new;
    }
    for (i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
}