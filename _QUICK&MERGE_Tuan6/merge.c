#include <stdio.h>
int step = 1;
void printArray(int arr[], int n) {
    printf("Buoc %d: ", step++);
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
void merge(int arr[], int l, int m, int r, int n) {
    int i, j, k;
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    i = 0; 
    j = 0; 
    k = l; 
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
    printf("\nSau khi tron khoang [%d..%d]:\n", l, r);
    printArray(arr, n);
}

void mergeSort(int arr[], int l, int r, int n) {
    if (l < r) {
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m, n);
        mergeSort(arr, m + 1, r, n);
        merge(arr, l, m, r, n);
    }
}

int main() {
    int arr[] = {101, 23, 57, 13, 25, 121, 87, 36, 13, 204, 111, 29, 59};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang ban dau: ");
    for(int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\nket qua merge sort\n");
    mergeSort(arr, 0, n - 1, n);
    return 0;
}