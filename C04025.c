#include <stdio.h>
void sort_even_odd(int arr[], int n) {
    int even[n], odd[n];
    int even_count = 0, odd_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[even_count++] = arr[i];
        } else {
            odd[odd_count++] = arr[i];
        }
    }
    for (int i = 0; i < even_count - 1; i++) {
        for (int j = i + 1; j < even_count; j++) {
            if (even[i] > even[j]) {
                int temp = even[i];
                even[i] = even[j];
                even[j] = temp;
            }
        }
    }
    for (int i = 0; i < odd_count - 1; i++) {
        for (int j = i + 1; j < odd_count; j++) {
            if (odd[i] > odd[j]) {
                int temp = odd[i];
                odd[i] = odd[j];
                odd[j] = temp;
            }
        }
    }
    for (int i = 0; i < even_count; i++) {
        printf("%d ", even[i]);
    }
    for (int i = 0; i < odd_count; i++) {
        printf("%d ", odd[i]);
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    sort_even_odd(arr, n);
    return 0;
}
