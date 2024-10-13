#include <stdio.h>

int swapBits(int num, int i, int j) {
    int bit1 = (num >> i) & 1;
    int bit2 = (num >> j) & 1;

    if (bit1 != bit2) {
        num ^= (1 << i) | (1 << j); 
    }
    
    return num;
}

int main() {
    int num = 29; 
    int i = 1, j = 3;
    printf("Result after swapping bits: %d\n", swapBits(num, i, j)); 
    return 0;
}
