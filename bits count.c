#include <stdio.h>

int countFlips(int a, int b) {
    int xor = a ^ b;
    int count = 0;
    
    while (xor != 0) {
        count += xor & 1;
        xor >>= 1;
    }
    
    return count;
}

int main() {
    int a = 29, b = 15;
    printf("Number of bits to flip: %d\n", countFlips(a, b)); // Output: 2
    return 0;
}
