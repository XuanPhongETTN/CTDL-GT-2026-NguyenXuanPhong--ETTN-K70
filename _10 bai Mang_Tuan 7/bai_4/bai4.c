#include <stdio.h>

void timTichLonNhat(int arr[], int n) {
    if (n < 2) {
        printf("Mang khong du phan tu\n");
        return;
    }
    int max1, max2, min1, min2;
    if (arr[0] > arr[1]) {
        max1 = arr[0];
        max2 = arr[1];
        
        min1 = arr[1];
        min2 = arr[0];
    } else {
        max1 = arr[1];
        max2 = arr[0];
        
        min1 = arr[0];
        min2 = arr[1];
    }
    for (int i = 2; i < n; i++) {
                if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
        if (arr[i] < min1) {
            min2 = min1;
            min1 = arr[i];
        } else if (arr[i] < min2) {
            min2 = arr[i];
        }
    }
    if (max1 * max2 > min1 * min2) {
        printf("Tich lon nhat la %d (tu %d va %d)\n", max1 * max2, max1, max2);
    } else {
        printf("Tich lon nhat la %d (tu %d va %d)\n", min1 * min2, min1, min2);
    }
}
int main() {
    int arr[] = {-10, -3, 5, 6, -2};
    int n = sizeof(arr) / sizeof(arr[0]);
    timTichLonNhat(arr, n);
    return 0;
}