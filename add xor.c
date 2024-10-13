#include <stdio.h>

int add(int a, int b) {
    while (b != 0) {
        int carry = a & b; 
        a = a ^ b; 
        b = carry << 1; 
    }
    return a;
}

int main() {
    int result = add(5, 7);
    printf("Sum: %d\n", result); 
    return 0;
}
