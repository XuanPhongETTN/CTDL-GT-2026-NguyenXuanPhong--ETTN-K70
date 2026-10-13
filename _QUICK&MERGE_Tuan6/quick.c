#include <stdio.h>

int step = 1;
void printArray(int arr[], int n) {
    printf("Buoc %d: ", step++);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void swap(int* a, int* b) {
    int t = *a;
    *a = *b;
    *b = t;
}
int partition(int arr[], int low, int high, int n) {
    int pivot = arr[high];
    int i = (low - 1);
    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            if (i != j) {
                swap(&arr[i], &arr[j]);
                printArray(arr, n);
            }
        }
    }
    if (i + 1 != high) {
        swap(&arr[i + 1], &arr[high]);
        printArray(arr, n);
    }
    return (i + 1);
}
void quickSort(int arr[], int low, int high, int n) {
    if (low < high) {
        int pi = partition(arr, low, high, n);
        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
    }
}
int main() {
    int arr[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 29, 59};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nket qua quick sort\n");
    quickSort(arr, 0, n - 1, n);
    return 0;
}