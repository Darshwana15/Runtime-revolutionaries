#include <stdio.h>

int hasOppositeSigns(int a, int b) {
    if ((a>0 && b<0)||(a<0 && b>0)) 
    return 1;
    else
    return 0;
}

int main() {
    int a = -10, b = 5;
    printf("Opposite signs: %d\n", hasOppositeSigns(a, b)); // Output: 1 (true)
    return 0;
}
