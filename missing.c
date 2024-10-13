#include <stdio.h>

int findMis(int arr[], int n) {
    int xor1 = 0, xor2 = 0;
    
    for (int i = 0; i < n - 1; i++) {
        xor1 ^= arr[i]; 
    }
    
    for (int i = 1; i <= n; i++) {
        xor2 ^= i; 
    }
    
    return xor1 ^ xor2; 
}

int main() {
    int arr[] = {1, 2, 4, 5, 6};
    int n = 6;
    printf("Missing number: %d\n", findMis(arr, n)); 
    return 0;
}
