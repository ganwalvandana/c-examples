#include <stdio.h>

int linear_search(int *array, int size, int element) {
  for (int i = 0; i < size; i++) {
    if (array[i] == element) {
      return i;
    }
  }

  return -1;
}

int main() {
  int array[] = {1, 5, 3, 2, 4};
  int size = sizeof(array) / sizeof(array[0]);

  int element = 3;

  int index = linear_search(array, size, element);

  if (index != -1) {
    printf("The element %d is present at index %d\n", element, index);
  } else {
    printf("The element %d is not present in the array\n", element);
  }

  return 0;
}
