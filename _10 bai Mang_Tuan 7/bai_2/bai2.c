#include <stdio.h>

void sortBinaryArray(int arr[], int n) {
    int zeros = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            zeros++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (i < zeros) {
            arr[i] = 0;
        } else {
            arr[i] = 1;
        }
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {1, 0, 1, 0, 1, 0, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    printArray(arr, n);
    sortBinaryArray(arr, n);
    printf("Mang sau khi sap xep: ");
    printArray(arr, n);
    return 0;
}