#include <stdio.h>
void dichsokhong(int arr[], int n) {
    int k = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[k] = arr[i];
            k++;
        }
    }
    for (int i = k; i < n; i++) {
        arr[i] = 0;
    }
}
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    int arr[] = {6, 0, 8, 2, 3, 0, 4, 0, 1};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    printArray(arr, n);
    dichsokhong(arr, n);
    printf("Mang sau khi dich chuyen: ");
    printArray(arr, n);
    return 0;
}