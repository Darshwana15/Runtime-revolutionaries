#include <stdio.h>

int a = 10;

void display()
{
    int b = 20;
    int a= 30;
    printf("Global scope variable inside display: %d\n", a);
    printf("Local scope variable inside display: %d\n", b);
}

int main() 
{
    printf("Global variable : %d\n",a);
    display();
    return 0;
}
