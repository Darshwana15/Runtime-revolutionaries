#include <stdio.h>

void fTNR(int arr[], int size) {
    int xor = 0, x = 0, y = 0;
    for (int i = 0; i < size; i++) {
        xor ^= arr[i]; 
    }

    
    int setBit = xor & ~(xor - 1);

    for (int i = 0; i < size; i++) {
        if (arr[i] & setBit) {
            x ^= arr[i]; 
        } else {
            y ^= arr[i];
        }
    }

    printf("The two non-repeating elements are %d and %d\n", x, y);
}

int main() {
    int arr[] = {2, 3, 7, 9, 11, 2, 3, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    fTNR(arr, size);
    return 0;
}
