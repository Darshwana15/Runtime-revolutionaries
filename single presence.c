#include <stdio.h>

int findSingle(int arr[], int size) {
    int xor = 0;
    for (int i = 0; i < size; i++) {
        xor ^= arr[i];
    }
    return xor;
}

int main() {
    int arr[] = {2, 3, 5, 4, 5, 3, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("The single element is: %d\n", findSingle(arr, size)); // Output: 4
    return 0;
}
