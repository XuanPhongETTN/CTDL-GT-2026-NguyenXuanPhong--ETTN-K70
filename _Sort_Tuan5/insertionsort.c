#include <stdio.h>

void inMang(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertionSort(int arr[], int n) {
    int i, key, j;
    for (i = 1; i < n; i++) {
        key = arr[i];
        j = i - 1;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
        
        printf("Buoc %d: ", i);
        inMang(arr, n);
    }
}

int main() {
    int arr[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 29, 59};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    printf("Mang ban dau: ");
    inMang(arr, n); 
    insertionSort(arr, n);
    
    return 0;
}