#include <iostream>
using namespace std;

// SWAPS TWO NUMBERS AND TAKES THEIR ADDRESS AS ARGUMENTS
void swapp(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// PERFORMS BUBBLE SORT 
void bubbleSort(int *arr, int length) {
    int i, j;
    for (i = 1; i < length; i++) {
        for (j = 0; j < length - i; j++) {
            if (arr[j] > arr[j + 1]) {
                swapp(&arr[j], &arr[j + 1]);
            }
        }
    }
}

// PERFORMS SELECTION SORT
void selectionSort(int *arr, int length) {
    int i, j, smallest;
    for (i = 0; i < length - 1; i++) {
        smallest = i;
        for (j = i + 1; j < length; j++) {
            if (arr[smallest] > arr[j]) {
                smallest = j;
            }
        }
        swapp(arr + smallest, arr + i);
    }
}

// PERFORMS INSERTION SORT
void insertionSort(int *arr, int length) {
    int i, j, temp;
    for (i = 0; i < length - 1; i++) {
        temp = arr[i + 1];
        for (j = i; j >= 0; j--) {
            if (temp < arr[j]) {
                arr[j + 1] = arr[j];
            } else {
                break;
            }
        }
        arr[j + 1] = temp;
    }
}

// IT IS THE MERGE FUNCTION FOR MERGE SORT
void merge(int *arr, int start, int mid, int end) {
    int temp[end - start + 1];
    int i = start, j = mid + 1, k = 0;
    while (i <= mid && j <= end) {
        if (arr[i] < arr[j])
            temp[k++] = arr[i++];
        else
            temp[k++] = arr[j++];
    }
    while (i <= mid)
        temp[k++] = arr[i++];
    while (j <= end) 
        temp[k++] = arr[j++];
    for (i = 0; i < k; i++) {
        arr[start + i] = temp[i];
    }    
}

// PERFORMS MERGE SORT
void mergeSort(int *arr, int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);
        merge(arr, start, mid, end);
    }
}

// PERFORMS QUICK SORT
void quickSort(int *arr, int start, int end) {
    if (start < end) {
        int pivot = arr[start];
        int i = start, j = end + 1;
        while (i < j) {
            do {
                i++;
            } while (i <= end && pivot > arr[i]);
            do j--;
            while (j >= start && pivot < arr[j]);
            if (i < j) {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[start], arr[j]);
        quickSort(arr, start, j - 1);
        quickSort(arr, j + 1, end);
    }
}

// IT IS THE HEAPIFY FUNCTION FOR HEAP SORT
void heapify(int *arr, int n, int i) {
    int largest = i;
    int l = 2 * i + 1;
    int r = 2 * i + 2;
    if (l < n && arr[largest] < arr[l])
        largest = l;
    if (r < n && arr[largest] < arr[r])
        largest = r;
    if (largest != i) {
        swapp(arr + largest, arr + i);
        heapify(arr, n, largest);
    }        
}

// PERFORMS HEAP SORT
void heapSort(int *arr, int length) {
    int i;
    for (i = length / 2 - 1; i >= 0; i--) {
        heapify(arr, length, i);
    }
    for (i = length - 1; i >= 0; i--) {
        swapp(arr, arr + i);
        heapify(arr, i, 0);
    }
}

// PERFORMS COUNTING SORT FOR POSITIVE NUMBER
void countingSort(int *arr, int length) {
    int output[length];
    int i, max = arr[0];
    for (i = 1; i < length; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    int count[max + 1] = {0};
    for (i = 0; i < length; i++) {
        count[arr[i]]++;
    }
    int temp = 0;
    for(i = 0; i <= max; i++) {
        count[i] += temp;
        temp = count[i];
    }
    for (i = 0; i < length; i++) {
        output[--count[arr[i]]] = arr[i];
    }
    for (i = 0; i < length; i++) {
        arr[i] = output[i];
    }
}

// FIND THE MAXIMUM VALUE IN THE ARRAY PROVIDED IN THE ARGUMENT
int findMax(int *arr, int length) {
    int max = arr[0];
    int i;
    for (i = 1; i < length; i++) {
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    return max;
}

// PERFORM COUNTING SORT ON A SINGLE DIGIT OF THE ARRAY OF NUMBER FOR RADIX SORT
void countSortADigit(int *arr, int length, int exp) {
    int output[length];
    int count[10] = {0}, i;
    for (i = 0; i < length; i++) {
        count[arr[i] % (exp * 10)]++;
    }
    int temp = 0;
    for (i = 0; i < 10; i++) {
        count[i] += temp;
        temp = count[i];
    }
    for (i = 0; i < 10; i++) {
    }
    for (i = 0; i < length; i++) {
        output[count[arr[i] % (exp * 10)] - 1] = arr[i];
        count[arr[i] % (exp * 10)]--;
    }
    for (i = 0; i < length; i++) {
        arr[i] = output[i];
    }
}

// PERFORMS RADIX SORT
void radixSort(int *arr, int length){
    int max = findMax(arr, length);
    int i;
    for (i = 1; max / i > 0; i *= 10) {
        countSortADigit(arr, length, i);
    }
}

// MAIN FUNCTION
int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    cout << "Enter the array : ";
    int i, arr[n];
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    selectionSort(arr, n);
    cout << "The Sorted array: ";
    for (i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
