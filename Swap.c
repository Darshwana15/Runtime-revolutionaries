#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a ^ *b; 
    *b = *a ^ *b; 
    *a = *a ^ *b; 
}

int main() {
    int a = 5, b = 7;
    printf("Before swap: a = %d, b = %d\n", a, b);
    swap(&a, &b);
    printf("After swap: a = %d, b = %d\n", a, b);
    return 0;
}
