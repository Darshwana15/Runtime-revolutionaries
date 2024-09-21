#include <stdio.h>
void change(int a) 
{
    a = 100; 
    printf("Function: x = %d\n", a);
}

int main() 
{
    int b = 10*2;
    printf("Value before calling the function: b = %d\n", b);
    change(b);
    printf("Value after calling the function: b = %d\n", b);
    return 0;
}
