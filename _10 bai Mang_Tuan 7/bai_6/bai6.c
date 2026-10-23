#include <stdio.h>
void manglonnhat(int arr[], int n) {
    if (n == 0) return;
    int max_so_far = arr[0];
    int max_ending_here = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max_ending_here + arr[i]) {
            max_ending_here = arr[i];
        } else {
            max_ending_here = max_ending_here + arr[i]; 
        }
        if (max_ending_here > max_so_far) {
            max_so_far = max_ending_here;
        }
    }
    printf("Tong lon nhat cua day con lien tiep la: %d\n", max_so_far);
}
int main() {
    int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Mang: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    manglonnhat(arr, n);
    return 0;
}